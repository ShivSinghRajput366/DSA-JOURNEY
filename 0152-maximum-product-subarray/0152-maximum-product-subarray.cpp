class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        
        int maxi = INT_MIN;
        if(n<=1){
            return nums[0];
        }
        for(int i=0; i<n; i++){
            int fact = 1;
            for(int j=i; j<n; j++){
            fact= fact*nums[j];
            maxi=max(maxi,fact);
            }
        } return maxi;
    }
};