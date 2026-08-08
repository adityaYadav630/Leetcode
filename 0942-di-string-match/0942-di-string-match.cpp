class Solution {
public:
    vector<int> diStringMatch(string s) {
        int l=0;
        int r=s.size();
       vector<int>ans;
        for(int i=0;i<s.size();i++){
         if(s[i]=='I'){
            ans.push_back(l);
            l++;
         }else{
            ans.push_back(r);
            r--;
         }
        }
        ans.push_back(l);
        return ans;
    }
};