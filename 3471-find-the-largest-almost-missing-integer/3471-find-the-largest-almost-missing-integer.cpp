class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
    unordered_map<int,int>m;
    int n=nums.size();
    for(int a:nums){
        m[a]++;
    }
     int ans=-1;
    if(k==1){ 
    for(int x:nums){
       if(m[x]==1){
        ans=max(ans,x);
       }
    }
     return ans;
    }
    else if(k==nums.size()){
     for(int x:nums){
        ans=max(ans,x);
       }
       return ans;
    }else{
      if(nums[0]>nums[n-1]){
          if(m[nums[0]]==1)return nums[0];
          else if(m[nums[n-1]]==1)return nums[n-1];
          else return -1;
      }
      else{
          if(m[nums[n-1]]==1)return nums[n-1];
          else if(m[nums[0]]==1)return nums[0];
          else return -1;
      }
    }
    return -1;
    }
};