// User function Template for C++

class Solution {
  public:
    int diagonalRL(vector<vector<int>>& mat, int N){
        int i=0, j=N-1;
        int sum=0;
        while(i<N && j>=0){
            sum = sum + mat[i][j];
            i++; j--;
        }
        return sum;
    }
    
    int diagonalLR(vector<vector<int>>&mat, int N){
        int i=0;
        int sum=0;
        while(i<N){
            sum = sum + mat[i][i];
            i++;
        }
        return sum;
    }
    
    int DiagonalSum(vector<vector<int> >& matrix) {
        // Code here
        int N = matrix.size();
        int d1 = diagonalLR(matrix, N);
        int d2 = diagonalRL(matrix, N);
        return d1+d2;
    }
};
