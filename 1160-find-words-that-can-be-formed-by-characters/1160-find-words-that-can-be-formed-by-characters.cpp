class Solution {
public:
    bool isGood(string str, string chars) {
        map<char, int> m;
        for(int i = 0; i < chars.length(); i++) 
            m[chars[i]]++;
        
        for(int i = 0; i < str.length(); i++) {
            if( m[str[i]] == 0)
                return false;
            else
                m[str[i]]--;
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        int sum = 0;
        for(int i = 0; i < words.size(); i++){
            if(isGood(words[i], chars))
                sum += words[i].length();
        }
        return sum;
    }
};