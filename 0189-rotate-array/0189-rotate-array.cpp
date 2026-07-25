class Solution {
    #include <algorithm>
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int temp[n];
        k = k%n;
        for(int  j = n-k; j<n; j++){
            temp[i] = nums[j];
            i++;
        } 
        for(int j=0; j<n-k; j++){
            temp[i] = nums[j];
            i++;
        }
          
        for(i=0; i<n; i++){
            nums[i] = temp[i];
        }
        return;
    }
};