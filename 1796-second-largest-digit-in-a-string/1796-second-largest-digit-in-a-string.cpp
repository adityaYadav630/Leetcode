class Solution {
public:
    int secondHighest(string s) {
        vector<int>nums;
        for(char a:s){
        if(a>='0'&&a<='9'){
            nums.push_back(a-'0');
        }
        }
        if(nums.size()==0)return -1;
        sort(nums.begin(),nums.end(),greater<int>());
        int ans=nums[0];
        for(int a:nums){
            if(ans!=a){
                return a;
            }
        }
        return -1;
        
    }
};