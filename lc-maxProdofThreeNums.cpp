class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // in this there are -ve values also in the arr
        // and if I multiply two -ve value it convert it into +ve and it can be
        // max prod than +ve value
        // so what I did here is i took two type of prod -> -ve product & +ve product
        // in -ve prod I only took 2 value because two value can be +ve not three
        // and I multiply that -ve prod with max +ve value and check
        // if -ve prod with max +ve value is > than +ve value
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int posProd = nums[n-1]*nums[n-2]*nums[n-3];
        int negProd = nums[0]*nums[1];
        if(negProd*nums[n-1] > posProd){
            return negProd*nums[n-1];
        }
        return posProd;
    }
};