class Solution {
public:
    int fact(int n){
        if(n==0)return 1;
        return n*fact(n-1);
    }
    bool isper(int a,int b){
        unordered_map<int,int>m;
        while(a){
            m[a%10]++;
            a/=10;

        }
        while(b){
            m[b%10]--;
            b/=10;
        }
        for(auto [d,f]:m){
            if(f!=0)return false;
        }
        return true;
    }
    bool isDigitorialPermutation(int n) {
        int ans=0;
        int temp=n;
        while(temp){
            int rem=temp%10;
            ans+=fact(rem);
            temp/=10;
        }
        return isper(n,ans);
    }
};