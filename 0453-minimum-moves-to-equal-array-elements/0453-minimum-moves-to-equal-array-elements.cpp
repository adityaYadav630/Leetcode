class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        int m=nums[0];
        for(int a:nums){
            m=min(m,a);
        }
       int ans=0;
        for(auto a:nums){
            ans+=(a-m);
        }
        return ans;
    }
};