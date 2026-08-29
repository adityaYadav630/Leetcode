class Solution {
public:
    bool equalFrequency(string word) {
        vector<int>fre(26,0);
        for(char ch:word){
            fre[ch-'a']++;
        }
        unordered_map<int,int>m;
        for(int i=0;i<26;i++){
            if(fre[i]>0)m[fre[i]]++;
        }
        if(m.size()>2)return false;
        else if(m.size()==1){
        if(m.begin()->first==1||m.begin()->second==1)return true;
        return false;
         }
       int f1=0;
       int c1=0;
       int f2=0;
       int c2=0;
       for(auto &a:m){
        if(f1==0){
            f1=a.first;
            c1=a.second;
        }else{
            f2=a.first;
            c2=a.second;
        }
       }
       if(c1==1&&(f1-f2==1||f1==1))return true;
       else if(c2==1&&(f2-f1==1||f2==1))return true;
       return false;
    }
};