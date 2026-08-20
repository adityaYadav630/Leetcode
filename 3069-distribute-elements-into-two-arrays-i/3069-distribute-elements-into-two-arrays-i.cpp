class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        if(nums.size()<=2)return nums;
        vector<int>left,right,ans;
        left.push_back(nums[0]);
        right.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(left[left.size()-1]>right[right.size()-1]){
                left.push_back(nums[i]);
            }
            else right.push_back(nums[i]);
        }
        for(int i:left){
            ans.push_back(i);
        }
        for(int i:right){
            ans.push_back(i);
        }
        return ans;
    }
};