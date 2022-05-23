class Solution {
public:
    bool isLeft(char ch) {
        if (ch == '(' || ch == '{' || ch == '[')
            return 1;
        else
            return 0;
    }
    bool isValid(string s) {
        map<char, char> Parentheses;
        Parentheses.insert(pair<char, char>('(', ')'));
        Parentheses.insert(pair<char, char>('[', ']'));
        Parentheses.insert(pair<char, char>('{', '}'));
        
        stack<char> balancer;
        for(int i = 0; i < s.length(); i++) {
            if(isLeft(s[i]))
                balancer.push(s[i]);
            else {
                if(!balancer.empty() && s[i] == Parentheses[balancer.top()])
                    balancer.pop();
                else
                    return 0;
            }
        }
        if(!balancer.empty())
            return 0;
        else
            return 1;
    }
};