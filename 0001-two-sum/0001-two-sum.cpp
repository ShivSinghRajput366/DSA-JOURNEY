 #include <bits/stdc++.h>
 class Solution {
   
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
      unordered_map<int, int> mp;
      int comp;
      for(int i=0; i<n; i++){
        comp = target - nums[i];
        if (mp.find(comp) != mp.end()) {
                return {mp[comp], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    
    }
};