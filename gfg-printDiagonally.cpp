class Solution {

  public:
    void rightToLeft(vector<vector<int>> &mat, int N, int i, int j, vector <int> &ans){
        while(i<N && j>=0){
            ans.push_back(mat[i][j]);
            i++; j--;
        }
    }
    vector<int> downwardDiagonal(int N, vector<vector<int>> A) {
        // Your code goes here
        vector<int> ans;
        for(int j=0; j<N; j++){
            rightToLeft(A, N, 0, j, ans);
        }
        for(int i=1; i<N; i++){
            rightToLeft(A, N, i, N-1, ans);
        }
        return ans;
    }
};