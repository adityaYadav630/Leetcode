class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
     int a=0;
     int b=0;
     for(int i:aliceSizes){
        a+=i;
     }   
     for(int i:bobSizes){
        b+=i;
     }
     int d=(b-a)/2;
     unordered_set<int>s;
     for(int i:bobSizes){
        s.insert(i);
     }
     for(int i:aliceSizes){
      if(s.count(i+d)){
        return {i,i+d};
      }
     }
      return {};
     

         }
};