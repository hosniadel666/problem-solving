class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_set<string> op;
        op.insert("+");
        op.insert("-");
        op.insert("*");
        op.insert("/");
        
        stack<int> operands;
        for(int i = 0; i < tokens.size(); i++) {
            string temp =tokens[i];
            if(op.find(temp) == op.end()) {
                operands.push(atoi(temp.c_str()));
            } else {
                if(temp == "+") {
                    int op1 = operands.top();
                    operands.pop();
                    int op2 = operands.top();
                    operands.pop();
                    operands.push(op1 + op2);
                }
                else if(temp == "-") {
                    int op1 = operands.top();
                    operands.pop();
                    int op2 = operands.top();
                    operands.pop();
                    operands.push(op2 - op1);
                }
                else if(temp == "/") {
                    int op1 = operands.top();
                    operands.pop();
                    int op2 = operands.top();
                    operands.pop();
                    operands.push(op2 / op1);
                }
                else {
                    int op1 = operands.top();
                    operands.pop();
                    int op2 = operands.top();
                    operands.pop();
                    operands.push(op1 * op2);
                }
                   
            }
            
        }
        return operands.top();
    }
    
};