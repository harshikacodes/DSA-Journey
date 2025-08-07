class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
        vector <int> ans; // and return type is vector so a vector ans to return
        // in this question we want unique intersection - so I used set here
        unordered_set <int> set;
        int n = a.size();
        
        // here I inserted all the elements of vector a in set
        for(int i=0; i<n; ++i){
            set.insert(a[i]);
        }
        
        // we are iterating on vector b
        // and checking if that ele is present in set
        // means intersection
        // so we just add that ele in my vector ans
        // and also erase that ele from set - if I don't do it, it will consider duplicates
        // if present in b...
        for(int ele: b){
            // end() means ele not found
            // so if ele that we are finding it is not equal to end()
            // means we found that ele
            // ele is present inside b
            if(set.find(ele) != set.end()){
                ans.push_back(ele);
                set.erase(ele);
            }
        }
        return ans;
    }
};