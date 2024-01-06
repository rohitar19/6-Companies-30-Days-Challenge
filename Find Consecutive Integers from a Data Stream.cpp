class DataStream {
private:
    int val=0;
    int cnt=0;
    int K=0;
public:
    DataStream(int value, int k) {
        this->val=value;
        this->K=k;
        cnt=0;
    }
    
    bool consec(int num) {
        if(num==val){
            cnt++;
            return cnt>=K;
        }
        else{
            cnt=0;
            return false;
        }
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */