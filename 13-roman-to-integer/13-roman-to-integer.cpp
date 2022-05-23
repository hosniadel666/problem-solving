class Solution {
public:
    int romanToInt(string s) {
        map<char, int> symbols ;
        symbols.insert(pair<char, int>('I' , 1));
        symbols.insert(pair<char, int>('V' , 5));
        symbols.insert(pair<char, int>('X' , 10));
        symbols.insert(pair<char, int>('L' , 50));
        symbols.insert(pair<char, int>('C' , 100));
        symbols.insert(pair<char, int>('D' , 500));
        symbols.insert(pair<char, int>('M' , 1000));

        int sum = 0;
        for(int i = 0; i < s.length(); i++){
            if(i != s.length() - 1 && symbols[s[i]] < symbols[s[i + 1]]){
                sum += symbols[s[i + 1]] - symbols[s[i]];
                i++;
            }
            else
                sum += symbols[s[i]];
        }
        cout << sum;
        
        return sum;
    }
};