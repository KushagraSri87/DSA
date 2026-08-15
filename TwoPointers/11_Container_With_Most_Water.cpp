class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxArea=0;
        while(left<right){
            int width = right - left;
            int waterHeight = min(height[right], height[left]);
            int area = waterHeight * width;
            if(area>maxArea){
                maxArea=area;
                }
            if (height[left] < height[right]) {
                left++;
                }
            else {
                right--;
    }
            
    
    

        }
        return maxArea;

}

};