class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(auto a:nums){
            ans+=(a-nums[0]);
        }
        return ans;
    }
};