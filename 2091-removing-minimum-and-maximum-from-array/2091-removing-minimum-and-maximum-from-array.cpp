class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int idx1=0,idx2=0,ans1=0,ans2=0,ans3=0;
        int maxv=nums[0],minv=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxv){
                maxv=nums[i];
                idx2=i;

            }
            if(minv>nums[i]){
                minv=nums[i];
                idx1=i;
            }
        }
        //both remove from starting 
        int gidx=max(idx1,idx2);
        ans1=gidx+1;
        //both remove from ending 
        int sidx=min(idx1,idx2);
        ans2=nums.size()-sidx;
        //one from start and another from end
        ans3=sidx+1+nums.size()-gidx;
        return min(ans1,min(ans2,ans3));
    }
};