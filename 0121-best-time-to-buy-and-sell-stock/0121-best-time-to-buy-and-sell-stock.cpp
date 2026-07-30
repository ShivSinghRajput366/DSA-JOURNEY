class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = prices[0];
        int maxi = 0;
        int profit;
        for(int i=0; i<n; i++){
            if(prices[i]<min){
                min = prices[i];
            }
            profit = prices[i]-min;
            maxi = max(maxi,profit);
        } return maxi;
    }
};