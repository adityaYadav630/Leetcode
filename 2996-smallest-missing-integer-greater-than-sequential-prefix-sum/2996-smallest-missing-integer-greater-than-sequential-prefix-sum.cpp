class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int>s;
        int  ans=0;
        int pre=nums[0];
        bool flag=true;
        for(int x:nums){
            s.insert(x);
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]+1){
                if(flag){
                    ans=pre;
                flag=false;
                }
                break;
            }
            pre+=nums[i];
        }
                    if(ans==0)ans=pre;
     while(true){
        if(!s.count(ans)){
          return ans;
        }
        ans++;
     }
     return 0;
    }
};