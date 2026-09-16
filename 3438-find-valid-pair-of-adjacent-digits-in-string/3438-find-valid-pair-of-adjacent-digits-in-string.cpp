class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char,int>m;
        for(char ch:s){
            m[ch]++;
        }
        string ans="";
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]&&m[s[i]]==s[i]-'0'&&m[s[i+1]]==s[i+1]-'0'){
                ans.push_back(s[i]);
                ans.push_back(s[i+1]);
                break;
            }
        }
        return ans;
    }
};