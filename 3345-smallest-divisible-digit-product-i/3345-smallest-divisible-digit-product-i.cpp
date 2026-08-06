class Solution {
public:
    int smallestNumber(int n, int t) {
        if(t==0)return -1;
    int temp=n;
        while(true){
        int pro=1;
        int temp2=temp;
        while(temp2){
            pro*=(temp2%10);
            temp2/=10;
        }
        if(pro%t==0)return temp;
        temp++;
        }
        return -1;
    }
};