class Solution {
public:
    bool isPalindrome(int x) {
        long long sum = 0;
        int n ;
        n  = x;
        while(n>0){
            int d = n%10;
            sum = sum*10 + d;
            n = n/10;
        } if(sum == x){
            return true;
        } else { return false; }
    }
};