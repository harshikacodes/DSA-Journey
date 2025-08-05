class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector <int> pSum;
        // I used vector here because return type is of vector
        int sum=0;

        // here i use prefix sum approach
        // and as i have vector so i just push_back sum 
        for(int i=0; i<n; i++){
            sum = sum + nums[i];
            pSum.push_back(sum);
        }

        return pSum;
    }
};