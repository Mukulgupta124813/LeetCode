class Solution {
public:
    bool isPalindrome(int x) {
        long long int result=0,sum=0,temp=x;
    if(x<0){
        return false;
    }
        while(x>0){
            result=x%10;
            sum=sum*10+result;
            x=x/10;
          
        }
        if(sum!=temp){
            return false;
        }
        return true;
    }
};