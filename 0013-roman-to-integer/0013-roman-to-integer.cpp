class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            
            if(i>0 && s[i-1]=='I' && s[i]=='V'){
                sum = sum + 3;   // already +1 mila tha 'I' ke waqt, ab +4 total chahiye
            }
            else if(s[i]=='I'){
                sum = sum + 1;
            }
            else if(s[i]=='V'){
                sum = sum + 5;
            }
            
            else if(i>0 && s[i-1]=='I' && s[i]=='X'){
                sum = sum + 8;   // +1 already mila, ab +9 total
            }
            else if(s[i]=='X'){
                sum = sum + 10;
            }
            
            else if(i>0 && s[i-1]=='X' && s[i]=='L'){
                sum = sum + 30;   // +10 already mila (X ke waqt), ab +40 total
            }
            else if(s[i]=='L'){
                sum = sum + 50;
            }
            
            else if(i>0 && s[i-1]=='X' && s[i]=='C'){
                sum = sum + 80;   // +10 already mila, ab +90 total
            }
            else if(s[i]=='C'){
                sum = sum + 100;
            }
            
            else if(i>0 && s[i-1]=='C' && s[i]=='D'){
                sum = sum + 300;   // +100 already mila, ab +400 total
            }
            else if(s[i]=='D'){
                sum = sum + 500;
            }
            
            else if(i>0 && s[i-1]=='C' && s[i]=='M'){
                sum = sum + 800;   // +100 already mila, ab +900 total
            }
            else if(s[i]=='M'){
                sum = sum + 1000;
            }
            
        }
        return sum;
    }
};