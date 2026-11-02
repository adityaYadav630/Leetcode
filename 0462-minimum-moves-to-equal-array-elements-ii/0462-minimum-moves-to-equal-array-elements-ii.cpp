class Solution {
public:
    int minMoves2(vector<int>& nums) {
      int n=nums.size();
      sort(nums.begin(),nums.end());
        if(n==0)return 0;
        int m=nums[n/2];
       int ans=0;
        for(auto a:nums){
            ans+=abs(a-m);
        }
        return ans;
    }
};