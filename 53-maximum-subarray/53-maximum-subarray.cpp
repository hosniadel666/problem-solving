class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_sum, largest_sum;
        cur_sum = nums[0];
        largest_sum = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            cur_sum = max(cur_sum + nums[i], nums[i]);
            largest_sum = max(largest_sum, cur_sum);
        }
        return largest_sum;
    }
};

/*
    Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
     -2
    + 1
    ---
     -1 or  1
          +
           -3
     --------
            -2 or  4
                 +
                  -1
            --------
                   3  or 2
                  +
                   2
            ---------
                   5  or 1
                  +
                   1
            ---------
                    6 or -5 or 4
             --------
                    6
*/