class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        if(is_sorted(s.begin(),s.end())){
            return 0;

        }
        if(n==2)return -1;
        char mx=s[0];
        char mn=s[0];
        for(char a:s){
            mx=max(mx,a);
            mn=min(mn,a);
        }
        if(mx==s[n-1]||mn==s[0])return 1;
        for(int i=1;i<n-1;i++){
            if(s[i]==mx||s[i]==mn)return 2;
        }
        return 3;
    }
};