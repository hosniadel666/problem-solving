class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> input;
        for(int i = 0; i < nums.size(); i++)
            input.insert(nums[i]);
        
        nums.assign(input.begin(), input.end());
        sort(nums.begin(), nums.end());
        
        if(nums.size() == 0)
            return 0;

        int output = 1;
        int cnt = 1;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] + 1 == nums[i + 1]){
                cnt++;
                if((i + 1) == nums.size() - 1)
                    output = max(cnt, output);
            } else {
                output = max(cnt, output);
                cnt = 1;
            }  
        }
        return output;
    }
};