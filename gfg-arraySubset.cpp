// in this ques I have to check b[] is subset of a[] or not
class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map <int , int> um;
        // we created a hashmap in this we store ele of a[] and it's freq
        int s1 = a.size();
        int s2 = b.size();
        
        // this loop we iterate on a[]
        for(int i=0; i<s1; i++){
            if(um.find(a[i]) != um.end()){ // if a[i] exists in hashmap then 
                // we have to inc it's freq
                um[a[i]] +=1;
            }
            else{ // if a[i] does not exists in hashmap then add that ele with freq=1
                um[a[i]] = 1;
            }
        }

        // this loop if for iterating on b[]
        for(int i=0; i<s2; ++i){
            // we check any of the value of b, is there freq 0 exists -> it means
            // that i-th ele does not exists in hashmap nor in a[]
            // so we return false
            if(um[b[i]]==0){
                return false;
            }
            // if exists than decrease freq - because there can be same elements
            um[b[i]]--;
        }
        return true;
    }
};