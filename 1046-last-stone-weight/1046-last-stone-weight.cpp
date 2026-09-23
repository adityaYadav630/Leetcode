class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>p;
        for(auto &a:stones){
            p.push(a);
        }
        while(p.size()){
         if(p.size()==1)break;
         int a=p.top();
         p.pop();
         int b=p.top();
         p.pop();
         if(a!=b){
           p.push(a-b);
         }
        }
        if(p.size())return p.top();
        else return 0;
    }
};