class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> out;
        set<int> s;
        
        for (int i = 0; i < nums.size(); i++) 
            s.insert(nums[i]);

        for (int i = 1; i <= nums.size(); i++) {
            if (s.find(i) == s.end()) 
                out.push_back(i);
        }
        return out;
    }
};