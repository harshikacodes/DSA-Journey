// Your code goes hereclass Solution{

class Solution {
  public:
    void sortedMerge(vector<int>& arr1, vector<int>& arr2, vector<int>& res) {
        // Your code goes here
        // first I sort both the unsorted arrays
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        
        int n = arr1.size();
        int m = arr2.size();
        
        // now they are sort - I can do the same approach that I did previously
        // taking pointer to track
        int p1 = 0; // p1 for arr1
        int p2 = 0; // p2 for arr2
        int p3 = 0; // p3 for res
        
        // until p1<n AND p2<m
        // we will compare smallest ele in both of them 
        while(p1<n && p2<m){
            if(arr1[p1] < arr2[p2]){
                res[p3] = arr1[p1];
                p3++;
                p1++;
            }
            else{
                res[p3] = arr2[p2];
                p3++;
                p2++;
            }
        }
        
        // if any ele left in p1 - means pointer p1 should less than n
        // so we take ele and insert it in res arr
        while(p1<n){
            res[p3] = arr1[p1];
            p3++;
            p1++;
        }

        // and if any ele left in p2 - means pointer p2 should less than m
        // so we take left over ele and insert it into res arr
        while(p2<m){
            res[p3] = arr2[p2];
            p3++;
            p2++;
        }
    }
};
