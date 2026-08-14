class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string temp;
        for(int i=0;i<s.size()/2;i++){
            char ch=s[i];
            temp+=ch;
            int mul=s.size()/temp.size();
            string ntemp="";
            for(int i=0;i<mul;i++){
                ntemp+=temp;
            }
            if(s==ntemp)return true;
        }
        return false;
    }
};