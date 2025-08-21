class Solution {
  public:
    vector<int> colSum(vector<vector<int>>& mat) {
        // Code here
        vector <int> sumv;
        int sum;
        int N = mat.size();
        int M = mat[0].size();
        int i=0, j=0;
        while(j<M){
            while(i<N){
                sum = sum + mat[i][j];
                i++;
            }
            sumv.push_back(sum);
            sum=0;
            i=0;
            j++;
        }
        return sumv;
    }
};