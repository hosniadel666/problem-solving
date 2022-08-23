class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        set<vector<int>> solutions;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0)
                continue;
            if(i == 0 || nums[i] > nums[i - 1]) {
                
                int start = i + 1;
                int end = nums.size() - 1;
                int negate = -1 * nums[i];

                while(start < end) {
                    if(nums[start] + nums[end] > negate)
                        end--;
                    else if(nums[start] + nums[end] < negate)
                        start++;
                    else {
                        vector<int>temp;
                        temp.push_back(nums[start]);
                        temp.push_back(nums[end]);
                        temp.push_back(-1 * negate);
                        sort(temp.begin(), temp.end());
                        solutions.insert(temp);
                        end--;
                        start++;
                    }
                }
            }
        }
        vector<vector<int>> result;
        for(auto it : solutions)
            result.push_back(it);
        return result;
    
//  This solutiom exceed the time limit
//         set<vector<int>> output;
//         sort(nums.begin(), nums.end());
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] > 0) break;
//             for(int j = i + 1; j < nums.size(); j++) {
//                 if(nums[i] + nums[j] > 0 && nums[j] > 0) break;
                
//                 for(int k = j + 1; k < nums.size(); k++) {    
//                     if(nums[i] + nums[j] + nums[k] == 0){
//                         vector<int>temp;
//                         temp.push_back(nums[i]);
//                         temp.push_back(nums[j]);
//                         temp.push_back(nums[k]);
//                         sort(temp.begin(), temp.end());
//                         output.insert(temp);
//                     }
//                 }
//             }
//         }
//         vector<vector<int>> result;
//         for(auto it : output)
//             result.push_back(it);
//         return result;
    }
};