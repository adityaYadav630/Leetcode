class DataStream {
public:
int k;
int last;
int count;
    DataStream(int value, int k) {
        this->k=k;
        last=value;
        count=0;
    }
    
    bool consec(int num) {
       if(num==last)count++;
       else count=0;
       return count>=k;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */