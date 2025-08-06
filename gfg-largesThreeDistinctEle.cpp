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
            int num = arr[i]; // take every ele and store inside `num` var
            

            if(num==max || num==secondMax || num==thirdMax){
                continue;
            }
            
            if(num>max){
                thirdMax = secondMax;
                secondMax = max;
                max = num;
            }
            // if num>2nd_max - means it is less than max but >than 2nd_max
            // so we only going to change 2nd & 3rd max
            else if(num>secondMax){
                thirdMax = secondMax;
                secondMax = num;
            }
            // it means num is less than max & 2nd_max only greater than 3rd_max
            // so we only update 3rd_max
            else if(num>thirdMax){
                thirdMax = num;
            }
        }
        
        // here we are covering edge cases if no 3 distinct ele is present
        // so 2nd_max & 3rd_max should be INT_MIN
        // if no distinct is present they are not going to change right?
        // and if we have only 2 distinct ele so there are different combinations
        // so I use if so that we will check for every var
        // and then push_back because it is vector
        // and we need ans in decreasing order
        // so we start doing push_back -> 1st max, 2nd secondMax, 3rd thirdMax
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
