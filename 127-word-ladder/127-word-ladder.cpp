class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> words;
        for(int i = 0; i < wordList.size(); i++) {
            words.insert(wordList[i]);
        }
        if(words.end() != words.find(beginWord))
            words.erase(beginWord);
  
        if(words.end() == words.find(endWord))
            return 0;
        queue<string> wordQ;
        queue<int> distance;
        
        wordQ.push(beginWord);
        distance.push(1);
        
        while(!wordQ.empty()) {
            string curr_word = wordQ.front();
            wordQ.pop();
            int curr_distance = distance.front();
            distance.pop();
            cout << curr_word << endl;
            if(curr_word == endWord)
                return curr_distance;
            
            for(int i = 0; i < curr_word.length(); i++) {
                string temp = curr_word;
                for(char ch = 'a'; ch <= 'z'; ch++) {
                    temp[i] = ch;
                    if(temp == curr_word)
                        continue;
                    if(words.find(temp) != words.end()) {
                        wordQ.push(temp);
                        distance.push(curr_distance + 1);
                        words.erase(temp);
                    }
                }
            }
        }
        print_set(words);
        cout << "hi";
        return 0;
    }
    void print_set(unordered_set<string> words) {
        cout << "-----------------" << endl;
        for(auto it: words) 
            cout << it << endl;
        cout << "-----------------" << endl;
    }
};