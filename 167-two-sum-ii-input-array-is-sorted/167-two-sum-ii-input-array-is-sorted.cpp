class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int begin, end;
        begin = 0;
        end = numbers.size() - 1;
        vector<int> output;
        while(begin < end) {
            int sum = numbers[begin] + numbers[end];
            if(sum > target) 
                end--;
            else if(sum < target)
                begin++;
            else {
                output.push_back(begin + 1);
                output.push_back(end + 1);
                break;
            }
        }
        return output;
    }
};