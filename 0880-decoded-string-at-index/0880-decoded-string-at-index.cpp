class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long size=0;
        for(char ch:s){
            if(ch>='0'&&ch<='9'){
                size*=int(ch-'0');
            }else{
                size++;
            }
        }
        if(size==0)return "";
        for(int i=s.size()-1;i>=0;i--){
         k%=size;
         if(k==0&&isalpha(s[i])){
            string temp;
            temp.push_back(s[i]);
            return temp;
         }else{
            if(s[i]>='0'&&s[i]<='9'){
                size/=int(s[i]-'0');
            }else size--;
         }
        }
        return "";
    }
};