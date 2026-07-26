class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int n = nums.size();
       vector<int> temp(n+1);
       int j=0; 
       int count = 0;
       for(int i=0; i<n; i++){
          if(nums[i] == 1){
            count++;
          }else{         
           temp[j]=count;
           j++; 
           count = 0;
          } 

        } temp[j]=count;
          j++;
        int big = 0;
       for(int i=0; i<j; i++){
        if(temp[i]>big){
            big=temp[i];
        }
       }
       return big; }
};