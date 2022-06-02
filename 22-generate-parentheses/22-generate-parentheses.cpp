class Solution {
public:
    vector<string> ans;
    
    void func(int a,int b,string s,int n){
        if (s.length()==2*n){
            ans.push_back(s);
            return;
        }
        

        if (a){
            func(a-1,b,s+'(',n);
        }
        if (b && b>a){
            func(a,b-1,s+')',n);
        }

    }
    
    vector<string> generateParenthesis(int n) {
        func(n,n,"",n);
     return ans;
    }
};