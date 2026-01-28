// Approach 1 (Recursion + Memoization)

// i start from n and break it into smaller sub-problems
// since the same values are computed many times in recursion
// i store already computed results in an array to avoid re-computation

class Solution1{

    // t[i] will store the tribonacci value of i once it is computed
    // size is fixed to 38 because constraints is n<=37
    int[] t = new int[38];

    public int find(int n){

        // these are base cases
        if(n==0){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }

        // if the value was already computed earlier, reuse it
        if(t[n] != -1){
            return t[n];
        }

        // to compute t(n) i need results of t(n-1), t(n-2) and t(n-3)
        int a = find(n-1);
        int b = find(n-2);
        int c = find(n-3);

        // here i am storing the result before returning
        return t[n] = a+b+c;
    }
}



// Approach 2 (Bottom-Up)
// instead of breaking the problem recursively,
// i build the solution step by step starting from the base case

class Solution2{
    public int tribonacci(int n){
        int[] t = new int[38];

        // base cases
        t[0] = 0;
        t[1] = 1;
        t[2] = 1;

        // each value depends on the prev three values
        for(int i=3; i<=37; i++){
            t[i] = t[i-1] + t[i-2] + t[i-3];
        }

        return t[n];
    }
}


// Approach 3 (Optimized)

// since each tribonacci value depends only on the last three values
// i don't need an entire array. i can just keey 3 variables

class Solution {
    public static int nthTribonacci(int n) {
        // code here
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        
        // a, b, c represent the last three values
        int a=0;
        int b=1;
        int c=1;
        // d will store the current val
        int d=0;
        
        for(int i=3; i<=n; i++){
            // curr val is the sum of prev 3 values
            d=a+b+c;

            // shift value forward for the next iteration
            a=b;
            b=c;
            c=d;
        }
        
        // after the loop... d containd t(n)
        return d;
    }
}