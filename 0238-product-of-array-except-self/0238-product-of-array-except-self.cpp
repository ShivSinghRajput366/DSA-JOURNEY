class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n);

        int fact = 1;

        // Left product
        for(int i = 0; i < n; i++) {
            ans[i] = fact;
            fact = fact * nums[i];
        }

        // Right product
        fact = 1;

        for(int i = n - 1; i >= 0; i--) {
            ans[i] = ans[i] * fact;
            fact = fact * nums[i];
        }

        return ans;
    }
};