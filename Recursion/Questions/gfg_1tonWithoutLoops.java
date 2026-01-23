class Solution {
    // in this I have to print num from 1 to N
    // 1 2 3 4 5
    static void printTillN(int N) {
        // code here
        if(N==0){
            return;
        }
        // so what I did is... I call the func
        // and then print it
        // what happen if I do like this is...
        // N will call N-1 and N-1 will call N-2 and so on...
        // so if my N is 5... 5 will call 4... 4 will call 3... 3 will call 2... 2 will call 1... 1 will call 0... and 0 is our base case... 0 return;... 
        // then it print 1 and then it prints 2 and 3 and 4 and 5...
        printTillN(N-1);
        System.out.print(N + " ");
    }
}