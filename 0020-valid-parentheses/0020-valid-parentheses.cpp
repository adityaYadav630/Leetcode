class Solution {
    public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
         if(s[i]=='('||s[i]=='['||s[i]=='{')st.push(s[i]);
         else{
            if(st.size()==0)return false;
         if(s[i]==')'){
           char last=st.top();
           if(last=='('){
            st.pop();
           }else return false;
         }else if(s[i]=='}'){
          char last=st.top();
           if(last=='{'){
            st.pop();
           }else return false;
         }
         else {
           char last=st.top();
           if(last=='['){
            st.pop();
           }else return false;
         }
         }
        }
      return st.size()==0;
    }
};