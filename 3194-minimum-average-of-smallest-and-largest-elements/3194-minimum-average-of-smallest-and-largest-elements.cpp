class Solution {
public:
    double minimumAverage(vector<int>& nums) {
      double ans=INT_MAX;
      int l=0;
      int n=nums.size()-1;
      int r=n;
      double avg;
      sort(nums.begin(),nums.end());
      while(l<=r){
        avg=(nums[l]+nums[r])/2.0;
        ans=min(ans,avg);
        l++;
        r--;
      } 
      return ans;
    }

};