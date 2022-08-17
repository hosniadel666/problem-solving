class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 1)
            return true;
        if(s.length() == 0)
            return false;
        s = string_trim(s);
        cout << s;
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != s[s.length() - 1 - i])
                return false;
        }
        
        return true;
    }
    string string_trim(string s) {
        string output = "";
        for(int i = 0; i < s.length(); i++) {
            if(isalpha(s[i]) || isdigit(s[i]))
            output += tolower(s[i]);
        }
        return output;
    }
};