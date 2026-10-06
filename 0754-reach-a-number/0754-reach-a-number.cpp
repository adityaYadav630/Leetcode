class Solution {
public:
    int reachNumber(int target) {
        target=abs(target);
     int sum=0;
     for(int i=1;;i++){
       sum+=i;
       if(sum>=target&&(sum-target)%2==0)return i;
     } 
     return sum; 
    }
};