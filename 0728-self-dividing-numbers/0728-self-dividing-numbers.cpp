class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            int temp=i;
            bool flag=true;
            while(temp){
           int r=temp%10;
           if(r==0){
            flag=false;
            break;
           }
           if(i%r!=0){
            flag=false;
            break;
           }
           temp/=10;
            }
            if(flag)ans.push_back(i);
        }
        return ans;
    }
};