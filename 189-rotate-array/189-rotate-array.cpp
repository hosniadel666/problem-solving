class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        queue<int> q;
        
        for(int i = nums.size() - 1; i >= 0; i--) {
            q.push(nums[i]);
        }
        
        while(k--){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        
        for(int i = nums.size() - 1; i >= 0; i--) {
            nums[i] = q.front();
            q.pop();
        }
    }
};