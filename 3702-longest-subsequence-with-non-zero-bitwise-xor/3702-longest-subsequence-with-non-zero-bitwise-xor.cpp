class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        bool flag=false;
        for(int i:nums){
            if(i!=0){
                flag=true;
                break;
            }
        }
        if(!flag)return 0;
        int ans=0;
        for(int i:nums){
            ans^=i;
        }
        if(ans!=0)return nums.size();
        return nums.size()-1;
    }
};