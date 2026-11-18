class Solution {
public:
    string capitalizeTitle(string title) {

       for(int i=0;i<title.size();i++){
        title[i]=tolower(title[i]);
       }
        int len = title.find(' ');
        if(len == string::npos)
         len = title.size();
        if(len>=3){
       title[0]=toupper(title[0]);
        }
       for(int i=0;i<title.size();i++){
         if(title[i]==' '){
            if(i+1<title.size()){
               if(i+3<title.size()&&title.find(' ',i+1)-i-1>=3)title[i+1]=toupper(title[i+1]);
            }
         }
       }
       return  title; 
    }
};