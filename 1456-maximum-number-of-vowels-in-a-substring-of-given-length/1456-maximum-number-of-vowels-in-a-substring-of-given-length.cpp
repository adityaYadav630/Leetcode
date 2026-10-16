class Solution {
public:
    bool check(char &a){
        if(a=='a'||a=='e'||a=='o'||a=='i'||a=='u')return true;
        else return false;
    }
    int maxVowels(string s, int k) {
        int ans=0;
        int curr=0;
        int start=0;
        int end=0;
        while(end<s.size()){
            if(check(s[end])){
                curr++;
            }
            while(end-start+1>k){
                if(check(s[start])){
                    curr--;
                }
                start++;
            }
            if(end-start+1==k){
                ans=max(ans,curr);
            }
                end++;
            }
        
        return ans;
    }
};