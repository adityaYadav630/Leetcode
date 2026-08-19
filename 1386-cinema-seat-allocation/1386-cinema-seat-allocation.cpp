class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,vector<int>>m;
        for(auto &a:reservedSeats){
            m[a[0]].push_back(a[1]);
        }
        int ans=(n-m.size())*2;
        for(auto [row,reserve]:m){
         vector<int>s(10,0);
         for(int i:reserve){
            s[i-1]=1;
         }
         bool left=true;
         for(int i=1;i<5;i++){
          if(s[i]==1)left=false;
         }
         bool mid=true;
         for(int i=3;i<7;i++){
          if(s[i]==1)mid=false;
         }
         bool right=true;
         for(int i=5;i<9;i++){
          if(s[i]==1)right=false;
         }
         if(left&&right)ans+=2;
         else if(left||right||mid)ans++;
        }
        return ans;
    }
};