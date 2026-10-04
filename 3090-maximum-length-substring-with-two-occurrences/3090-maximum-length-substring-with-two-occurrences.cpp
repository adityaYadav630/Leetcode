class Solution {
public:
    int maximumLengthSubstring(string s) {
     int ans=0;
        int l=0;
        int r=0;
        unordered_map<char,int>m;
        while(r<s.size()){
            m[s[r]]++;
            while(l<s.size()&&m[s[r]]>2){
                m[s[l]]--;
                l++;
            }
             ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};