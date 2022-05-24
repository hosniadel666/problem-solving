class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int , int> m;
        
        for(size_t i = 0; i < nums.size(); ++i)
            m[nums[i]]++;
        
        int max = 0, out;
        for(auto it = m.cbegin(); it != m.cend(); ++it) {
            if (it->second > max){
                max = it->second;
                out = it->first;
            }         
        }
        return out;
    }
};