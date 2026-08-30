class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxA=INT_MIN;
        int l = 0;
        int r=heights.size()-1;
        while(l<r){
            int side = r-l;
            maxA=max(maxA,side*min(heights[l],heights[r]));
            if(heights[l]<=heights[r])l++;
            else r--;
        }
        return maxA;
    }
};
