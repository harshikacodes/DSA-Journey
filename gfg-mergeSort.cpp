class Solution {
  public:
    void merge(vector<int>& arr, int l, int mid, int r){
        // I have two sorted arrays
        // left to mid
        // mid+1 to right

        // I create a temp vector to store sorted arr
        vector <int> ans;
        // took two pointers - one is at 1st half(left)
        // second is at 2nd half(mid+1)
        int p1=l;
        int p2=mid+1;
        
        // this is merge algo
        // we have to merge until p1 and p2 is in range
        // but there is a case when ele from p1 left or p2 left!!!
        while(p1<=mid && p2<=r){
            if(arr[p1]<=arr[p2]){
                ans.push_back(arr[p1]);
                p1++;
            }
            else{
                ans.push_back(arr[p2]);
                p2++;
            }
        }
        
        // adding remaining ele from 1st half
        while(p1<=mid){
            ans.push_back(arr[p1]);
            p1++;
        }

        // adding remaining ele from 2nd half
        while(p2<=r){
            ans.push_back(arr[p2]);
            p2++;
        }
        
        for(int i=l; i<=r; i++){
            arr[i] = ans[i-l];
        }
    }
    
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        // this is base condtion for mergeSort recursive calls
        // this will work until left is >= right
        if(l>=r){
            return ;
        }

        // in every call we are dividing arr in two halfes
        int mid = (l+r)/2;
        // calling mergeSort() for 1st halves
        mergeSort(arr, l, mid);
        // calling mergeSort() for 2nd halves
        mergeSort(arr, mid+1, r);
        // at the end merging both the sorted arrays in one arr
        merge(arr, l, mid, r);
    }
    
};