class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

    if(intervals.size() == 1) 
        return intervals;
        
    sort(intervals.begin(), intervals.end());
        
    vector<vector<int>> output;    
    output.push_back(intervals[0]);
        
    for(int i = 1; i < intervals.size(); i++) {
        if(output.back()[1] >= intervals[i][0]) 
            output.back()[1] = max(output.back()[1] , intervals[i][1]);
        else 
            output.push_back(intervals[i]); 
    }

//          *recursive solution*-
//         vector<vector<int>> output;
//         deque<vector<int>> input;
//         for(int i = 0; i < intervals.size(); i++) 
//             input.push_back(intervals[i]);
        
//         sort(input.begin(), input.end());
//         recurse(input, 0);
        
//         for(int i = 0; i < input.size(); i++) 
//             output.push_back(input[i]);
        
        return output;
    }
    void recurse(deque<vector<int>>& intervals, int index) {
        
        if(index == intervals.size() - 1 || intervals.size() == 1)
            return;
        
        vector<int> temp1 = intervals[index];
        vector<int> temp2 = intervals[index + 1];

        if(temp1[1] >= temp2[0]){
            
            intervals.erase(intervals.begin() + index, intervals.begin() + index + 2);
            
            if(temp1[1] < temp2[1]) 
                temp1[1] = temp2[1];
            
            intervals.insert(intervals.begin() + index, temp1);
            return recurse(intervals, index);
        } else 
            return recurse(intervals, index + 1);
        
            
    }
};