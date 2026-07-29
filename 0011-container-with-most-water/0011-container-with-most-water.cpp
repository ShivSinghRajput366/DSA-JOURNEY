class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxi = -1;
        int l=0;
        int r=n-1;
        int area = 0;
        while(r>l){
            if(height[l]<height[r]){
                area = min(height[l],height[r])*(r-l);
                l++;
            }else{
                area = min(height[l],height[r])*(r-l);
                r--;
            }
            maxi = max(maxi,area);
        }
       return maxi;
    }
};