class Solution {
public:
    int minInsertions(string s) {
        int ans=0;
        int open=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='('){
             open++;
            }else{
               if(open){
                open--;
               }else{
                ans++;
               }
            if(i+1<s.size()&&s[i+1]==')'){
                i++;
            }else ans++;
            }
        }
        ans+=2*open;
        return ans;
    }
};