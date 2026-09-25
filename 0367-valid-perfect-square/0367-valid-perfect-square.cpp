class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=1;
        int r=num;
        while(l<=r){
        int mid=l+(r-l)/2;
        if(1LL*mid*mid==num)return true;
        else if(1LL*mid*mid>num)r=mid-1;
        else l=mid+1;
        }
        return false;
    }
};