class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> index;
        vector<int> row_zeros;
        for(int i = 0; i < matrix[0].size(); i++)
            row_zeros.push_back(0);
        
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    vector<int>temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    index.push_back(temp);
                }    
            }
        }

        if(index.empty())
            return;
        for(int i = 0; i < index.size(); i++) {     
            matrix[index[i][0]] = row_zeros;
            for(int k = 0; k < matrix.size(); k++) {
                matrix[k][index[i][1]] = 0;
            }
        }
    }
};