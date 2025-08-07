class Solution {
  public:
    vector<int> mergeNsort(vector<int>& a, vector<int>& b) {
        // Write your code here
        vector <int> ans;
        unordered_set <int> set; // we have to return merged & sorted arr with unique ele
        // so I used set here
        
        // I inserted arr a ele and arr b ele in set - so that i have only unique elements
        for(int num : a){
            set.insert(num);
        }
        
        for(int num : b){
            set.insert(num);
        }
        
        // and my return type is vector we can't return set here and also we can't sort set
        // set is unsorted
        // so we add ele of set into vector
        for(int ele : set){
            ans.push_back(ele);
        }
        // we call inbuilt sort method to sort our vector   
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};