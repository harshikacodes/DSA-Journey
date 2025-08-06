class Solution {
  public:
    int maxPerimeter(vector<int> &arr) {
        // code here.
        int n = arr.size();
        sort(arr.begin(), arr.end());
        // I sort the arr because I need maximum perimeter - so that I can access max ele 
        // it is at the end
        // perimeter is a+b+c
        int a = n-1, b=n-2, c=n-3; // they have indices of sides
        
        while(c>=0){
            // first I am checking is it a triangle or not
            // if not then i decrement the indices 
            // so that i check another sides is they form pair or not
            // I will check whole array
            // util my first side that is c reach to 0
            // if c reached to 0 means it doesn't form triangle 
            // so I return -1 outside loop.
            if((arr[a]+arr[b])>arr[c] && (arr[b]+arr[c])>arr[a] && (arr[a]+arr[c])>arr[b]){
                return arr[a]+arr[b]+arr[c];
            }
            c--;b--;a--;
        }
        return -1;
    }
};