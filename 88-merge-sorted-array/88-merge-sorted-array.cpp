class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        while(m > 0 && n > 0) {
            if(nums1[m - 1] >= nums2[n - 1]) {
                nums1[n + m - 1] = nums1[m - 1];
                m--;
            } else {
                nums1[n + m - 1] = nums2[n - 1];
                n--;
            }
        }
        while(n > 0) {
            nums1[m + n - 1] = nums2[n - 1];
            n--;
        }
        // we don't need to check the remanings of nums1, they are in the right places
        // while(m > 0) {
        //     nums1[m + n - 1] = nums1[m - 1];
        //     m--;
        // }

    }
};