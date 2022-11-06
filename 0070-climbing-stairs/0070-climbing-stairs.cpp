class Solution {
public:
    int climbStairs(int n) {
        long long int stairs[50];
        stairs[0]=0;
        stairs[1]=1;
        for(int i=2;i<50;i++){
            stairs[i]=stairs[i-1]+stairs[i-2];
        }
        return stairs[n+1];
    }
};