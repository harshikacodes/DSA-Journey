class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size(); // we nee size because we nee to know the size of vector and
        // from where we have to start our loop
        // because in this we are finding from nearest greatest ele from right
        // so we will go right to left
        vector<int> ans(n, -1);
        stack<int> st;
        
        for(int i=n-1; i>=0; i--){
            while(st.size()>0 && st.top()<=arr[i]){
            // if stack is not empty
            // and
            // top ele in stack is less than current ele
            // we pop it!!!
                st.pop();
            }
            
            if(st.size()>0){
            // if stack is not empty
            // in above loop we remove all the not possible ele
            // so we get top ele as nearest greatest ele
                ans[i]=st.top();
            }
            // and we push that ele also...
            // because it can be possible ans
            st.push(arr[i]);
        }
        return ans;
    }
};