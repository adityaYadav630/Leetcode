class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum=0;
        long long pro=1;
        int temp=n;
        while(temp){
            sum+=(temp%10);
            pro*=(temp%10);
            temp/=10;
        }
        return n%int(sum+pro)==0;
    }
};