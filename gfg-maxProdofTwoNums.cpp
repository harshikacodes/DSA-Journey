// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        // I sort vector using inbuilt func
        int n = arr.size();
        return arr[n-1]*arr[n-2];
        // after sort it is obvious last two ele are max
        // so if we mul two max ele it's prod will be max
        // so we multiply ele at n-1 * ele at n-2
    }
};