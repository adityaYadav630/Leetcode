class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000)return 0;
        long long base=1000;
        long long ans=0;
        while(base<=n){
            ans+=(n-base+1);
            base*=1000;
        }
        return ans;
    }
};