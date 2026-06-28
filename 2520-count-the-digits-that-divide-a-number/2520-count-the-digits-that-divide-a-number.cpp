class Solution {
public:
    int countDigits(int num) {
        int val,sum=0;
        int x = num;
            while(x != 0){
                val = x % 10;
                if(num%val == 0){
                    sum = sum + 1;
                }
                x = x/10;
            } return sum;
        
    }
};