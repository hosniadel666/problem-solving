class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> output;
        set<vector<int>> solutions;
        
        for(int i = 0; i < nums.size(); i++) {
            int64_t new_target = target - nums[i];
            for(int j = i + 1; j < nums.size(); j++) {
                
                if(nums[i] + nums[j] > 0 && nums[i] + nums[j] > target)
                    continue;
                int start = j + 1;
                int end = nums.size() - 1;
                int64_t new_target_2 = new_target - nums[j];
                
                while(end > start) {
                    int64_t sum = nums[start] + nums[end];
                    if(sum > new_target_2)
                        end--;
                    else if(sum < new_target_2)
                        start++;
                    else {
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[start]);
                        temp.push_back(nums[end]);
                        solutions.insert(temp);
                        start++;
                        end--;
                    }

                }
                    
            }
        }
        for(auto it : solutions)
            output.push_back(it);
        return output;
            
    }
};