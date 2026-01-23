class Solution {
    // here we need to print num from N to 1
    // 5 4 3 2 1
    void printNos(int N) {
        // code here
        if(N==0){
            return;
        }
        
        // so here i am just printing N
        // and then calling same func for N-1 
        // so when printNos(N-1)
        // will called... it will print N-1 and it will call N-2... and so on
        System.out.print(N + " ");

        // as return type is void
        // means we are not returning anything
        // so we just call our func
        printNos(N-1);
    }
}