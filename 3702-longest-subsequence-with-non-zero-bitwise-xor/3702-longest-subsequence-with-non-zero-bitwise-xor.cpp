class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        bool flag=false;
        int ans=0;
        for(int i:nums){
            if(i!=0){
                flag=true;
            }
            ans^=i;
        }
        if(!flag)return 0;
      
        if(ans!=0)return nums.size();
        return nums.size()-1;
    }
};