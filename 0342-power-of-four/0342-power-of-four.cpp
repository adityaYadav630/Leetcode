class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1||n==4)return true;
         float temp=float(n)*1.0;
        while(temp>1){
            temp/=4.0;
        }
        if(temp==1)return true;
        else return false;
    }
};