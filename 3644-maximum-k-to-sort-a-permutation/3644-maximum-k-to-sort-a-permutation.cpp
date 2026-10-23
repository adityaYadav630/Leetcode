class Solution {
public:
    int sortPermutation(vector<int>& nums) {
       vector<int>correct(nums);
       sort(correct.begin(),correct.end());
       int ans=-1;
        for(int  i=0;i<nums.size();i++){
        if(nums[i]!=correct[i]) ans&=nums[i]&correct[i];
        }
        return ans==-1?0:ans;
    }
};