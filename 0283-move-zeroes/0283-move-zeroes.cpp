 #include <bits/stdc++.h>
 class Solution {
   
public:

    void moveZeroes(vector<int>& nums) {
       int n = nums.size();
       int temp[n];
       int j=0;
       for(int i = 0; i<n; i++){
        if(nums[i] != 0){
            temp[j] = nums[i];
            j++;
        } }
        for( int i=j; i<n; i++){
            temp[i] = 0;
        }
        for(int i=0; i<n; i++){
            nums[i] = temp[i];
        }
        return ;
        } 
    
};