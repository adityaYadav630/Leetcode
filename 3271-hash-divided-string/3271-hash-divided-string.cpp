class Solution {
public:
    string stringHash(string s, int k) {
        int i=0;
        string ans="";
        while(i<s.size()){
            int num=0;
            for(int j=i;j<s.size()&&j<i+k;j++){
                num+=int(s[j]-'a');
            }
            ans.push_back('a'+num%26);
            i+=k;
        }
        return ans;
    }
};