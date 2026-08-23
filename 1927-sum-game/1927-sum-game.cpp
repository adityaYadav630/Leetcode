class Solution {
public:
    bool sumGame(string num) {
        int left=0;
        int right=0;
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<num.size();i++){
                if(i<num.size()/2){
                    if(num[i]=='?'){
                        left++;
                    }else{
                        leftsum+=(num[i]-'0');
                    }
                }else{
                    if(num[i]=='?'){
                        right++;
                    }else{
                        rightsum+=(num[i]-'0');
                    }
                }
        }
        if((left+right)%2==1)return true;
        else{
            return leftsum-rightsum!=(right-left)*9/2;
        }
    }
};