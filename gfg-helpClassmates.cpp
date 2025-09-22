// User function Template for C++

class Solution {

  public:
    vector<int> help_classmate(vector<int> arr, int n) {
        // Your code goes here
        vector<int> ans(n, -1);
        stack<int> st;
        
        // in this we have to go to right to left
        for(int i=n-1; i>=0; i--){
            while(st.size()>0 && st.top()>=arr[i]){
            // if size of stack is > 0 
            // &
            // top ele of stack is > than current ele
            // then
            // we will pop that ele
            // if so - top ele cann't be possible soln -> because here we are finding smallest nearest ele.
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