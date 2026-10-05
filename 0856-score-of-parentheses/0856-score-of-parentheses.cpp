class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int count=0;
        st.push(0);
        for(char ch:s){
          if(ch=='('){
            st.push(0);
          }
          else{
           int l=st.top();
           st.pop();
           int sl=st.top();
           st.pop();
           st.push(sl+max(2*l,1));
          }
        }
        return st.top();
    }
};