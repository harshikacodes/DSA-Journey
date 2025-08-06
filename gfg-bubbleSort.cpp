class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            int swapp = 0;
            for(int j=0; j<n-i-1; j++){
            // it is going till 0 to n-1, n-2, n-3...
            // because in bubble sort we check and swap adjacent elements
            // it automatically sends largest element to the end
                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    swapp++;
                    // we are counting swap because if first ele is not > than 2nd means
                    // already it is sorted.
                }
            }
            if(swapp == 0){
                // so we don't use loop till n we just iterate only one time and if we 
                // found swap == 0 means it is already sorted.
                break;
            }
        }
    }
};