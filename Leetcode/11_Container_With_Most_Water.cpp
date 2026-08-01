class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        for(int i=0 ; i<height.size() ; i++){
            for( int j= i+1; j<height.size() ; j++){
                int width = j - i;
                int waterHeight = min(height[i], height[j]);
                int area = waterHeight * width;
                if(area>maxArea){
                    maxArea=area;
                }
            }

            
    }
    return maxArea;
    
}

};

// optimized solution

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