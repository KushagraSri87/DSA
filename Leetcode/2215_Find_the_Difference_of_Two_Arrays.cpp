class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        unordered_set<int> set2;
        vector<int> answer1;
        vector<int> answer2;

        for(int i = 0 ; i < nums1.size() ; i++){
            set1.insert(nums1[i]);
        }
        for(int i = 0 ; i < nums2.size() ; i++){
            set2.insert(nums2[i]);
        }
        for(int x : set1){
            if(set2.count(x)==0){
            answer1.push_back(x);
        }
        }

        for(int x: set2){
            if(set1.count(x)==0){
                answer2.push_back(x);
            }
        }
        return{answer1,answer2};
        }
    
    };
