class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int n = nums.size();
       vector<int> temp(n+1);
       int j=0; 
       int count = 0;
       int maxi = 0;
       for(int i=0; i<n; i++){
           if(nums[i]==1){
            count++;
           }else{
            count = 0;
           }
           maxi = max(maxi, count);
       }
       return maxi;
       }
};