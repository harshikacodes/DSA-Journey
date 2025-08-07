class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // in this two sorted arr are given I have to merge them and sort them.
        // and nums1 have len -> m+n
        // and nums2 have len -> n
        
        // in nums1 till m size we have our ele and starting from m+1 -> 0 ele are there in
        // that place we have to merge nums2... right?

        // so what we do is... we take a pointer p1 at m-1... because it's the end of 
        // our nums1 arr
        int p1 = m-1; 
        // p2 is for tracking ele of nums2 - and as we are comparing from last(greater ele)
        int p2 = n-1;
        // we place p3 at the end because we have to insert ele at last so we compare by 
        // checking which ever is greater (p1 or p2)
        int p3 = m+n-1;

        // we are tracking from backside so it's obevious we come at start so are cond is
        // until my p1>=0 && p2>=0
        while(p1>=0 && p2>=0){
            // here we are checking nums1's last ele is greater than nums's last ele
            // if so
            // insert that ele into nums1 last (m+1...n-1)
            if(nums1[p1] > nums2[p2]){
                nums1[p3] = nums1[p1];
                p3--;
                p1--;
            }
            // it means nums2's last ele is > than nums1's
            else{
                nums1[p3] = nums2[p2];
                p3--;
                p2--;
            }
        }

        // here we are checking - if p2 does not reach to 0 means there are still ele left
        // and those ele are smaller than p1's every ele
        // so what we do is we insert them in nums1
        while(p2 >=0){
            nums1[p3] = nums2[p2];
            p3--;
            p2--;
        }
    }
};