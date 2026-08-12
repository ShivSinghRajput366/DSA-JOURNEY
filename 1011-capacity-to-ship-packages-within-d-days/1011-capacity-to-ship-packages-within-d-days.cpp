class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            sum = sum + weights[i];
        }
        int max = *max_element(weights.begin(), weights.end());
        int low= max;
        int high = sum;
        
        while(low<=high){
            int requireddays =1;
            int mid = low+(high-low)/2;
            long long load = 0;
            for(int i=0; i<n; i++){
               if(load + weights[i]<= mid){
                load = load+weights[i];
               }else{
                requireddays++;
                load=weights[i];
               }
            }
            if(requireddays <= days){
                high = mid-1;
            }else{
                low = mid+1;
            }
        } return low;
    }
};