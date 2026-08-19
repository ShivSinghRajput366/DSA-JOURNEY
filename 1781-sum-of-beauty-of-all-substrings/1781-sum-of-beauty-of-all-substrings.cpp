class Solution {
public:
    int beautySum(string s) {
      int n=s.size();
      int st = 0;
      int ed = st+1;
      
      int sum=0;
      while(st<n-1){
        
            int hash[26]={0};
      for(int i=st; i<n; i++){
        hash[s[i]-'a']++;
      
      
     int mx = 0, mn = INT_MAX;
     for(int i = 0; i < 26; i++){
         if(hash[i] > 0){
        mx = max(mx, hash[i]);
        mn = min(mn, hash[i]);
       }
      }
      int beauty = mx - mn;
      sum = sum+beauty;
        } st++;
      }
      return sum;
    }
};