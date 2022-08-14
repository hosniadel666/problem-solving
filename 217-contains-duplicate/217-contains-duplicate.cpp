class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> temp;
        for(auto& it : nums)
            temp.insert(it);
        return (temp.size() < nums.size())? true: false;
    }
};