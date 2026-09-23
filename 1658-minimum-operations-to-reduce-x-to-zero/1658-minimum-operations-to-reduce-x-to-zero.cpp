class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
     int total=0;
     for(auto a:nums){
        total+=a;
     }   
     int target=total-x;
     if(target==0)return nums.size();
     else if(target<0)return -1;
     int l=0;
     int r=0;
     int ans=-1;
     int sum=0;
     while(r<nums.size()){
      sum+=nums[r];
      while(sum>target){
        sum-=nums[l];
        l++;
      }
      if(sum==target){
        ans=max(ans,r-l+1);
      }
      r++;
     }
     return ans==-1?-1:nums.size()-ans; 
    }
};