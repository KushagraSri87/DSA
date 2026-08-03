class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxLength=0;
        int zeroCount=0;
        int left=0;
            for(int i = 0 ; i < nums.size() ; i++){
                if(nums[i]==0){
                    zeroCount++;
                }
            while(zeroCount>1){
            if (nums[left] == 0) {
                zeroCount--;
            }
            left++;
        }
        int currentlength= i-left;
        if(currentlength>maxLength){
            maxLength=currentlength;
        }
        
            
            
        }
        return maxLength;

        
    }
};