class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        else
        {
            map<char, int> m_1, m_2;
            for(int i = 0; i < s.length(); i++) {
                m_1[s[i]]++;
                m_2[t[i]]++;
            }
            if(m_1 == m_2)
                return true;
            else
                return false;
            
        }
    }
};