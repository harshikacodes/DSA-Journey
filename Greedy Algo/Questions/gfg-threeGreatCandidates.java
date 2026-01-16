class Solution {
    int maxProduct(int[] arr) {
        // first I sort the arr in ascending order
        Arrays.sort(arr);
        int n = arr.length;
        
        // now the main part
        // there are three types of arr
        // 1 - positive 
        // 2 - negative
        // 3 - postive + negative both
        // for the +ve and -ve we do product of max 3 ele from the arr and we get the result
        // but for the arr which have both +ve & -ve
        //     - we take two smallest number and one largest num
        //     - assume here we take two -ve num, and two -ve num prod in one largest +ve num
        //     - and we multiply them with the most larget num so we get highest prod.
        // this is my greedy choice
        int prod1 = arr[n-1] * arr[n-2] * arr[n-3];
        int prod2 = arr[0] * arr[1] * arr[n-1];
        
        if(prod1>prod2){
            return prod1;
        }
        else{
            return prod2;
        }
    }
}