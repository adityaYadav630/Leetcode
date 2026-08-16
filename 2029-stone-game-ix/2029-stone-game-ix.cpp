class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int count1=0;
        int count2=0;
        int count0=0;
        for(int i:stones){
            if(i%3==0)count0++;
            if(i%3==1)count1++;
            if(i%3==2)count2++;
        }
        if(count0%2!=0){
          return abs(count1-count2)>2;
        }
        else return count1>0&&count2>0;
    }
};