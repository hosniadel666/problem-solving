class Solution {
public:
    vector<string> ans;
    int pair_num;
    void generate_parentheses(int left, int right, string s) {
        if (s.length() == 2 * pair_num){
            ans.push_back(s);
            return;
        }
        if (left)
            generate_parentheses(left - 1, right, s + '(');

        if (right && right > left)
            generate_parentheses(left, right - 1, s + ')');
    }
    
    vector<string> generateParenthesis(int n) {
        pair_num = n;
        generate_parentheses(pair_num, pair_num,"");
     return ans;
    }
};