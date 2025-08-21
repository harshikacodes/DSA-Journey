// User function Template for C++
class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        vector <int> res;
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=0; j<m; j++){
                sum=sum+mat[i][j];
            }
            res.push_back(sum);
        }
        return res;
    }
};