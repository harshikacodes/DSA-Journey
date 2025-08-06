class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        // in selection what we do is we take i-th index as min and find another ele
        // in the entire ele who is smaller than min - if we find it we swap 
        int n = arr.size();
        for(int i=0; i<n; i++){
            int mini = i;
            for(int j=i; j<n; j++){
                // we start j=i; because when we swap it already min ele at start if we 
                // move i no need to again check for it - it is smallest ele, and its
                // 2nd ele is 2nd smallest...
                if(arr[j] < arr[mini]){
                    mini = j;
                }
            }
            // swap function
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }
    }
};