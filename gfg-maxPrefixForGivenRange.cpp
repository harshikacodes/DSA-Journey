class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,
                            vector<int>& rightIndex) {
        // code here.
        vector <int> ans;
        int n = arr.size();
        int sum = 0;
        int maxx = INT_MIN; 
        
        // rightindex and leftindex can have many ele that's why I used here a loop
        int idxLen = leftIndex.size();
        for(int i=0; i<idxLen; i++){
            for(int j=leftIndex[i]; j<=rightIndex[i]; j++){
                sum = sum + arr[j];
                maxx = max(maxx, sum);
            }
            // everytime inserting max in the ans vector
            // and reinitialize sum and max
            ans.push_back(maxx);
            sum=0;
            maxx=INT_MIN;
        }
        
        return ans;
    }
};