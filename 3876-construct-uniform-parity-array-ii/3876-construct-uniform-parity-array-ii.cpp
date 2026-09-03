class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mine=INT_MAX;
        int mino=INT_MAX;
        for(int i:nums1){
            if(i%2==0){
                mine=min(mine,i);
            }else{
                mino=min(mino,i);
            }
        }
        if(mino<mine)return true;
        else{
            for(int i:nums1){
                if(i%2==1)return false;
            }
        }
        return true;
    }
};