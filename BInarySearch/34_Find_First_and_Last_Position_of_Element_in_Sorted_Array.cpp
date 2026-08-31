class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int s=0;
    int e=nums.size()-1;
    int first=-1;
    int last=-1;
    vector<int> ans;
    while(s<=e){
        
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            first=mid;
            e=mid-1;
        }
        else if(target>nums[mid]){
                s=mid+1;
            }

        else{
                e=mid-1;
            }

        }
        s = 0;
        e = nums.size() - 1;
        while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            last=mid;
            s=mid+1;
        }
        else if(target>nums[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
            ans.push_back(first);
            ans.push_back(last);
            return ans;
    
    }  
};


