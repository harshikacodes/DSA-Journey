// User function template for C++

class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        // code here
        int n = arr.size();
        long sum = 0;
        vector <int> pfSum(n);
        
        // in this we have to return pfsum with it's average
        // so what I did was according to the count I divide with the sum;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
            pfSum[i] = sum/(i+1);
        }
        
        return pfSum;
    }
};