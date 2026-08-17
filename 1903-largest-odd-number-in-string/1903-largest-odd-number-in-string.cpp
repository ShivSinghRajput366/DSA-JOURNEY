class Solution {
public:
    string largestOddNumber(string num) {
       int n = num.size();
       int st=0;
       int end=n-1;
       string ans;
       while(end>=0){
        if(num[end]%2==1){
           for(int i=0; i<=end; i++){
            ans+=num[i];}
            return ans;
           } else {
            end--;
           }
        }
        return ans;
    }
};