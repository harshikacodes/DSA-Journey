class Solution {
  public:
    vector<int> getThreeLargest(vector<int>& arr) {
        // code here
        vector <int> ans;
        // I use vector here bcoz return type is vector
        int max = INT_MIN;
        int secondMax = INT_MIN;
        int thirdMax = INT_MIN;
        // I take 3 var max, 2nd-max, 3rd-max -> intialize with INT_MIN because we need
        // max so we take opposite value
        
        for(int i=0; i<arr.size(); i++){ // iterate on entire array
            int num = arr[i]; 
            
            if(num==max || num==secondMax || num==thirdMax){
                continue;
            }
            
            if(num>max){
                thirdMax = secondMax;
                secondMax = max;
                max = num;
            }
            else if(num>secondMax){
                thirdMax = secondMax;
                secondMax = num;
            }
            else if(num>thirdMax){
                thirdMax = num;
            }
        }
        
        if(max!=INT_MIN){
            ans.push_back(max);
        }
        if(secondMax!=INT_MIN){
            ans.push_back(secondMax);
        }
        if(thirdMax!=INT_MIN){
            ans.push_back(thirdMax);
        }
        
        return ans;
    }
};
