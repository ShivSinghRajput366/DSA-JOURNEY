class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n= nums.size();
        int max = *max_element(nums.begin(), nums.end());
        int low = 1;
        int high = max;
        while(low<=high){
            int mid = low+(high-low)/2;
            long long sum = 0;
            for(int i=0; i<n; i++){
                sum = sum + (nums[i] + mid - 1) / mid;
            }
            if(sum<= threshold){
                high = mid-1;
            }else{
                low = mid+1;
            }
        } return low;
    }
};