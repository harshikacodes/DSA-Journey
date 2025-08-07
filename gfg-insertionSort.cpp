class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        // we need to go till 0 -> n-1 (length of arr)
        for(int i=0; i<n-1; i++){
            // first we take only one ele i = 0; -> 0-th ele
            // we place j next ele to i - because we every time insert a
            // new ele to check is is smaller than prev ele
            // if yes we swap
            int j=i+1;
            // here we are doing j>0; because we don't need to access 0 
            // we automatically can like if our j is at 1
            // so j-1 will be at 0
            // but what if our j is at 0 so j-1 would be at -1 (that's not possible)
            while(j>0 && arr[j-1] > arr[j]){
                // cond is we only check if the ele we add is smaller than prev ele
                // if yes than swap and it goes on... till j>0
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                
                j--;
            }
        }
    }
};