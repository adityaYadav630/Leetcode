class Solution {
public:
    int minMoves(vector<int>& nums) {
        int target=nums[0];
        for(auto a:nums){
            target=max(target,a);
        }
        int ans=0;
        for(int a:nums){
            ans+=(target-a);
        }
        return ans;
    }
};