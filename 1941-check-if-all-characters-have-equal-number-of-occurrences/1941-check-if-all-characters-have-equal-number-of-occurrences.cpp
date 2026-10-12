class Solution {
public:
    bool areOccurrencesEqual(string s) {
        if(s.size()==0)return true;
        vector<int>fre(26,0);
        for(auto a:s){
            fre[a-'a']++;
        }
        int count=fre[s[0]-'a'];
        for(auto a:s){
            if(fre[a-'a']!=count)return false;
        }
        return true;
    }
};