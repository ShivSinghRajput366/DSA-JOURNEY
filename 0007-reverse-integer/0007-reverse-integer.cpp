class Solution {
public:
    int reverse(int x) {
        int d;
        long long sum=0;
        while(x!=0){
            d = x%10;
            sum = sum*10 + d;
            x = x/10;
        if(sum> INT_MAX || INT_MIN > sum ){
            return 0;
        }
        } return sum;
    } 
};