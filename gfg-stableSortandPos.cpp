//Back-end complete function template in C++

class Solution {

  public:
    // Function to get the index of an element in a sorted array.
    int getIndexInSortedArray(vector<int>& arr, int k) {
        // Write Code Here
        int target = arr[k];
        // here I took k-th ele as my target
        int idx = 0;
        // I track for the new index where it will be 
        
        for(int i=0; i<arr.size(); ++i){
            // so some are the cases
            // first I count how many ele that are less than my target
            // then I will inc my index of tracking postion
            if(arr[i]<target){
                idx++;
            }
            // now imagine in my arr I have same ele many time so I have to check its pos 
            // so I don't need ele that is greater that target
            // so I check ele is == target
            // and
            // I have my target index  - if there are same ele same as target i will
            // consider only ele that are less than my k 
            // because if element's index is greater than k
            // it means it is after that k-th ele

            // I will inc index for position
            else if(arr[i] == target && i<k){
                idx++;
            }
        }
        return idx;
    }
};