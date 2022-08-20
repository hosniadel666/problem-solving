class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return bst(nums, 0, nums.size() - 1, target);
    }
    int bst(vector<int>& nums, int start, int end, int target) {
        int mid = (start + end) / 2;
        if(target == nums[mid])
            return mid;
        else if(target > nums[mid])
            return (end > mid)? bst(nums, mid + 1, end, target):mid + 1;
        else
            return (start < mid)? bst(nums, start, mid - 1, target):mid;
        
    }
};