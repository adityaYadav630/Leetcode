class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/"){
                s.push(stoi(tokens[i]));
            }else{
                int last=s.top();
                s.pop();
                int secondlast=s.top();
                s.pop();
                if(tokens[i]=="+"){
                    s.push(secondlast+last);
                }else if(tokens[i]=="-"){
                    s.push(secondlast-last);
                }else if(tokens[i]=="*"){
                    s.push(secondlast*last);
                }else{
                    s.push(secondlast/last);
                }
            }
        }
        return s.top();
    }
};

