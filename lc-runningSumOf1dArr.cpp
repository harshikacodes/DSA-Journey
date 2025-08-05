class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector <int> pSum;
        int sum=0;

        for(int i=0; i<n; i++){
            sum = sum + nums[i];
            pSum.push_back(sum);
        }

        return pSum;
    }
};