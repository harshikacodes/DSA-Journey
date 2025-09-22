class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        // code here
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;
        
        // left -> right
        for(int i=0; i<n; i++){
            while(st.size()>0 && st.top()>=arr[i]){
                st.pop();
            }
            if(st.size()>0){
                ans[i] = st.top();
            }
            st.push(arr[i]);
        }
        return ans;
    }
};