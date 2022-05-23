class Solution {
public:
    bool isLeft(char ch) {
        if (ch == '(' || ch == '{' || ch == '[')
            return 1;
        else
            return 0;
    }
    bool isValid(string s) {
        stack<char> temp;
        for(int i = 0; i < s.length(); i++) {
            if(isLeft(s[i]))
                temp.push(s[i]);
            else {
                
                if(!temp.empty() && abs(temp.top() - s[i]) <= 2)
                    temp.pop();
                else
                    return 0;
            }
        }
        if(!temp.empty())
            return 0;
        else
            return 1;
    }
};