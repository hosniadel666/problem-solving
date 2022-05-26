class Solution {
public:
    int convert_to_int(string str) {
        int result = 0;
        int size = str.length();
        for(int i = 0; i < size; i++) {
            result += (str[i] - '0') * pow(2, size - 1 - i);
        }
        return result;
    }
    string convert_to_str(int n, int size) {
        string result = "";
        while(n > 0) {
            result += to_string(n & 1);
            n = n >> 1;
            size--;
        }
        while (size > 0) {
            result += '0';
            size--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int size = nums.size();
        vector<int> nums_i;
        for(int i = 0; i < size; i++)
            nums_i.push_back(convert_to_int(nums[i]));
        for(int i = 0; i < pow(2, size); i++) {
            int flag = 0;
            for(int j = 0; j < size; j++) {
                if(i == nums_i[j])
                    flag = 1;
            }
            if(!flag)
                return convert_to_str(i, size);
        }
        return nullptr;
    }
};