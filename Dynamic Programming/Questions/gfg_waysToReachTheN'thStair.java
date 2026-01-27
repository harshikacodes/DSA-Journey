class Solution {
    int countWays(int n) {
        // your code here
        if(n<=1){
            return 1;
        }
        
        // `a` represents the num of ways to reach stair (i-2)
        int a=1; // ways to reach stair 0
        // `b` represents the num of ways to reach stair (i-1)
        int b=1; // ways to reach stair 1
        int c=0;
        
        // here i am calculating ways from stair `2` up to stair `n`
        for(int i=2; i<=n; i++){

            // to reach stair `i` the person can
            // - come from stair (i-1) by taking 1 step
            // - or come from stair (i-2) by taking 2 steps
            // ...so total ways = ways(i-1) + ways(i-2)
            c = a+b; // num of ways to reach stair i

            // here i am shifting values for next iteration
            a=b;
            b=c;
        }
        return c;
    }
}
