class Solution {
    public int fib(int n) {
        // i know that fib(0) = 0 and fib(1) = 1
        // so i did if n is less or equal to 1 then return n itself.
        if(n<=1){
            return n;
        }
        // and the fibonacci of nth number is sum of previous two terms
        return fib(n-1) + fib(n-2);
    }
}