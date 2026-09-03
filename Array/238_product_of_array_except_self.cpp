class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;

        for(int i = 0 ; i < nums.size() ; i++){
            long long  product = 1;
            for(int j = 0 ; j<nums.size() ; j++){
                if(i!=j){
                    product *= nums[j];
                }
                
            }
            answer.push_back(product);

        }  
        
        return answer;      
    }
};