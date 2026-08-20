class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int s=0;
        int e=numbers.size()-1;
        int currsum = 0;
        while(s<e){
            currsum = numbers[s]+numbers[e];
            if(currsum==target){
                ans.push_back(s+1);
                ans.push_back(e+1);
                return ans;
            
            }
            else if(currsum > target){
                e--;
            }
            else{
                s++;
            }
            
        
        
    }
    return ans;
 }
};