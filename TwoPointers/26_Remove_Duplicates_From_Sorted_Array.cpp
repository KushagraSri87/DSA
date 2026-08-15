class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        for (int i = 1 ; i<nums.size() ; i++){
            if(nums[i]!=nums[slow]){
                slow++;
                nums[slow]=nums[i];

            }
        }
        return slow+1;
        


    }
    
};
