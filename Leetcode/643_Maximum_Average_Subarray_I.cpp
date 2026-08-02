class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int sum=0;
        for(int i = 0 ; i<k ; i++){
            sum+= nums[i];
        }
        int maxSum=sum;
        for(int i=k ; i<nums.size() ; i++){
            sum = sum - nums[i - k] + nums[i];
            if(maxSum<sum){
                maxSum=sum;
            }

            
        }
         double maxAvg = (double)maxSum/k;
        return maxAvg;
    }
};