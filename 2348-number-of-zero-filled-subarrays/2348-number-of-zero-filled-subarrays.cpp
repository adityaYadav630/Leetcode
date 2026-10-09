class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        long long count=0;
        for(int i=0;i<nums.size();i++){
         if(i>0&&nums[i]==0&&nums[i]==nums[i-1])count++;
        else if(nums[i]==0) count=1;
        else count=0;
        ans+=count;
        }
        return ans;
    }
};

