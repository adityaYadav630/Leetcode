class Solution {
public:
    string solveEquation(string equation) {
        if(equation=="0x=0")return "Infinite solutions";
        int c=0;
        int xc=0;
        int i=0;
        bool sign=false;
        while(i<equation.size()){
            int num=0;
            bool neg=false;
            if(equation[i]=='='){
                sign=true;
                i++;
            }else if(equation[i]=='-'){
                neg=true;
                i++;
            }else if( equation[i]=='+') {
                i++;
            }
            bool hasNum=false;
            while(i<equation.size()&&equation[i]>='0'&&equation[i]<='9'){
            num=num*10+(equation[i]-'0');
            i++;
            hasNum=true;
            }
            if(i<equation.size()&&equation[i]=='x'){
                if(num==0&&!hasNum){
                 num=1;
                }
                if(neg)num*=-1;
                if(sign)num*=-1;
                xc+=num;
                i++;
            }else{
                 if(neg)num*=-1;
                if(sign)num*=-1;
                c+=num;
            }
        }
        if(xc==0&&c==0)return "Infinite solutions";
        else if(xc==0)return "No solution";
        string ans="x=";
        int a=c/(xc*-1);
        ans+=to_string(a);
        return ans;
    }
};