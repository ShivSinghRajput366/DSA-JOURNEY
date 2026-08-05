class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      sort(intervals.begin(), intervals.end());

vector<vector<int>> ans;

vector<int> current = intervals[0];   // current interval

for (int i = 1; i < intervals.size(); i++) {

    if (current[1] >= intervals[i][0]) {
        // merge
        current[1] = max(current[1], intervals[i][1]);
    } else {
        // current complete ho gaya
        ans.push_back(current);

        // naya current
        current = intervals[i];
    }
}

// last current bhi add karna hai
ans.push_back(current);

return ans;  
    }
};