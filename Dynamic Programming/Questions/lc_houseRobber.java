class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        int prevPrev = 0;
        int prev = nums[0];

        for(int i=2; i<=n; i++){
            int skip = prev;
            int steal = nums[i-1] + prevPrev;
            int curr = Math.max(skip, steal);
            prevPrev = prev;
            prev = curr;
        }
        return prev;
    }
}