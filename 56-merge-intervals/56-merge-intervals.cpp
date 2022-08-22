class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> output;
        deque<vector<int>> input;
        for(int i = 0; i < intervals.size(); i++) {
            input.push_back(intervals[i]);
        }
        sort(input.begin(), input.end());
        recurse(input, 0);
        for(int i = 0; i < input.size(); i++) {
            output.push_back(input[i]);
            for(int j = 0; j < input[i].size(); j++) {
                cout << input[i][j] << " ";
            }
            cout << endl;
        }
        return output;
    }
    void recurse(deque<vector<int>>& intervals, int index) {
        if(index == intervals.size() - 1 || intervals.size() == 1)
            return;
        vector<int> temp1 = intervals[index];
        vector<int> temp2 = intervals[index + 1];
        // cout << temp1[0] << " - " << temp1[1] <<endl;
        if(temp1[1] >= temp2[0]){
            intervals.erase(intervals.begin() + index, intervals.begin() + index + 2);
            if(temp1[1] < temp2[1]) 
                temp1[1] = temp2[1];
            intervals.insert(intervals.begin() + index, temp1);
            return recurse(intervals, index);
        } else {
            return recurse(intervals, index + 1);
        }
            
    }
};