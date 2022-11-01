class Solution {
public:
    bool isNeg(int x){
        return x<0?true:false;
    }
    int reverse(int x) {
        long result=0,n;
        bool neg=isNeg(x);
        x=abs(x);
        while(x>0){
            n=x%10;
            result=result*10 + n;
            x=x/10;
        }
        if(neg){
           result*=-1;
        }
        if (result>=-1*pow(2,31)&&result<=pow(2,31)-1)
            return result;
        else return 0;
    }
};