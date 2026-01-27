class Solution {
    public int fib(int n) {
        if(n<=1){
            return n;
        }
        int c=0;
        int a=0;
        int b=1;

        for(int i=1; i<n; i++){
            c=a+b;
            a=b;
            b=c;
        }

        return c;
    }
}

// Recursive (Top-Down)

class Fibonacci{
    public static int fib(int i, int[] dp){
        if(i<=1){
            return i;
        }

        if(dp[i] != -1){
            return dp[i];
        }

        dp[i] = fib(i-1, dp) + fib(i-2, dp);
        return dp[i];
    }

    public static int solve(int N){
        int[] dp = new int[N+1];

        for(int i=0; i<=N; i++){
            dp[i] = -1;
        }

        return fib(N, dp);
    }
}


// Iterative (Bottom-Up)

class Fibonacci2{
    public static int solve(int N){
        if(N<=1){
            return N;
        }

        int[] dp = new int[N+1];

        dp[0] = 0;
        dp[1] = 1;

        for(int i=2; i<=N; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[N];
    }
}


// Space Optimized

class Fibonacci3{
    public static int solve(int N){
        if(N<=1) return N;

        int[] dp = new int[3];

        dp[0] = 0;
        dp[1] = 1;

        for(int i=2; i<=N; i++){
            dp[i%3] = dp[(i-1)%3] + dp[(i-2)%3];
        }

        return dp[N%3];
    }
}