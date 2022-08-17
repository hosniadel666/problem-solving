class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output;
        for(int i = 0; i < numRows; i++) {
            vector<int> temp;
            for(int j = 0; j < i + 1; j++) {
                if(j == 0 || j == i) 
                    temp.push_back(1);
                 else {
                    vector<int> prev = output[i - 1];
                    temp.push_back(prev[j] + prev[j - 1]);
                }
            }
            output.push_back(temp);
        }
        return output;
    }
};