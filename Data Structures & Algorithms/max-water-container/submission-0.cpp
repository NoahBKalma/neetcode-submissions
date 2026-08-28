class Solution {
public:
    int maxArea(vector<int>& heights) {
        int numHeights = heights.size();
        int maxArea = 0;
        
        int left = 0;
        int right = numHeights - 1;

        while(left < right) {
            maxArea = max(maxArea, (right - left) * min(heights[left], heights[right]));
            if(heights[left] > heights[right]) {
                right--;
            } else {
                left++;
            }
        }

        return maxArea;
    }
};
