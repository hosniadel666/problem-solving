class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output = merge_sorted(nums1, nums2);
        int mid = output.size();
        if(mid % 2 == 1)
            return output[mid / 2];
        else
            return (output[mid/2] + output[mid/2 - 1]) / 2.0;
    }
    vector<int> merge_sorted(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;
        int m = nums1.size();
        int n = nums2.size();
        
        while(m > 0 && n > 0) {
            if(nums1[m - 1] > nums2[n - 1]) {
                output.push_back(nums1[m - 1]);
                m--;
            } else {
                 output.push_back(nums2[n - 1]);
                n--;
            }
        }
        while(n > 0) {
             output.push_back(nums2[n - 1]);
            n--;
        }
        while(m > 0) {
             output.push_back(nums1[m - 1]);
            m--;
        }
        reverse(output.begin(), output.end());
        return output;
    }
};