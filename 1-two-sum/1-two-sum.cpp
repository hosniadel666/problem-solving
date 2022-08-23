class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // The complexity of this solution is O(n)
        map<int, int> m;
        vector<int> output;
        for(int i = 0; i < nums.size(); i++) {
            if(m.find(nums[i]) != m.end()) {
                output.push_back(m[nums[i]]);
                output.push_back(i);
            } else 
                m[target - nums[i]] = i;
                  
        }
        return output;
        
        
        // THe complexity of this solution is O(n * n)
        // vector<int> output;
        // for(int i = 0; i < nums.size(); i++) {
        //     for(int j = i + 1; j < nums.size(); j++) {
        //         if( target - nums[i] == nums[j]) {
        //             output.push_back(i);
        //             output.push_back(j);
        //             return output;
        //         }
        //     }
        // }
        // return output;
    }
};