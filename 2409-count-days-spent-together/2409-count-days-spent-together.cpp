
class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int ad1=0,ad2=0,am1=0,am2=0;
        int ld1=0,ld2=0,lm1=0,lm2=0;
        vector<int>days = {31,28,31,30,31,30,31,31,30,31,30,31};
        bool flag=false;

        for(auto a:arriveAlice){
            if(a=='-'){
                flag=true;
            }else{
                if(flag){
                    ad1=ad1*10+(a-'0');
                }else{
                    am1=am1*10+(a-'0');
                }
            }
        }

        flag=false;
        for(auto a:arriveBob){
            if(a=='-'){
                flag=true;
            }else{
                if(flag){
                    ad2=ad2*10+(a-'0');
                }else{
                    am2=am2*10+(a-'0');
                }
            }
        }

        flag=false;
        for(auto a:leaveBob){
            if(a=='-'){
                flag=true;
            }else{
                if(flag){
                    ld2=ld2*10+(a-'0');
                }else{
                    lm2=lm2*10+(a-'0');
                }
            }
        }

        flag=false;
        for(auto a:leaveAlice){
            if(a=='-'){
                flag=true;
            }else{
                if(flag){
                    ld1=ld1*10+(a-'0');
                }else{
                    lm1=lm1*10+(a-'0');
                }
            }
        }
        int as=ad1, ae=ld1, bs=ad2, be=ld2;
        for(int i=0;i<am1-1;i++) as+=days[i];
for(int i=0;i<lm1-1;i++) ae+=days[i];
for(int i=0;i<am2-1;i++) bs+=days[i];
for(int i=0;i<lm2-1;i++) be+=days[i];
       int count=0;
       for(int i=1;i<=365;i++){
        if(i >= as && i <= ae && i >= bs && i <= be){
    count++;
}
       }
        return count;
    }
};
