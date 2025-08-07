
class Solution {
  public:
    void sortHalves(int arr[], int n) {
        // your code here
        sort(arr, arr+n);
        // in this ques what I have to do is, given an array it is sorted but in two
        // halfs - so I just apply inbuilt func of sort()
        // but there are many other approaches to do it
        // one is using insertion sort
        // another one is using pointer p1 and p2 and check for smallest or largest ele
    }
};