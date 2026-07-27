 #include <bits/stdc++.h>
 class Solution {
   
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
       int x,y;
        int i=0;
        int j=n-1;
        int temp[n]; 
        for(int i=0; i<n; i++){
            temp[i] = nums[i];
        } 
        sort(nums.begin(),nums.end());
        while(j>i){  
           
           int sum = nums[i]+nums[j];
           if(sum<target){
            i++;
           }else if(sum>target){
            j--;
           }else if(target==sum){
             x = nums[i];
             y = nums[j];
             break;
           } 
          
        } int a = -1, b = -1;

        for (int k = 0; k < n; k++) {

            if (temp[k] == x && a == -1) {
                a = k;
            }
            else if (temp[k] == y && k != a) {
                b = k;
            }
        }

        return {a, b}; 
    
    }
};