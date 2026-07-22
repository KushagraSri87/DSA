class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int water = 0;

        for (int i = 0; i < n; i++) {

            int leftMax = height[i];
            for (int j = 0; j <= i; j++) {
                leftMax = max(leftMax, height[j]);
            }

            int rightMax = height[i];
            for (int j = i; j < n; j++) {
                rightMax = max(rightMax, height[j]);
            }

            water += min(leftMax, rightMax) - height[i];
        }

        return water; // Time Complexity: O(n^2), Space Complexity: O(1)
    }
};