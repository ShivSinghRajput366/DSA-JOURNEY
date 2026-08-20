class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        mp[0] = -1;   // base case: sum 0 mila index -1 pe (before start)
        
        int count = 0;
        int fans = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) count--;
            else count++;
            
            if (mp.find(count) != mp.end()) {
                fans = max(fans, i - mp[count]);
            } else {
                mp[count] = i;   // sirf pehli baar store karo
            }
        }
        return fans;
    }
};