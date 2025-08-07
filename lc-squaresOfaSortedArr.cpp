class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // in this ques sorted arr is given -ve and +ve value both
        // I have to square it 
        // and return sorted arr
        vector<int> ans;
        int n = nums.size();

        // so I iterate on vector and in my ans vector I insert it's square
        for(int ele: nums){
            ans.push_back(ele*ele);
        }

        // by using in-built func I perform sort operation
        sort(ans.begin(), ans.end());
        return ans;
    }
};