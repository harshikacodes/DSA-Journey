class Solution {
    // Function to calculate factorial of a number.
    int factorial(int n) {
        // code here
        if(n<=1){
            return n;
        }
        return n * factorial(n-1);
    }
}

// we know that factorial is 
// n! = n * (n-1)!
// so here i use this expression to code factorial func