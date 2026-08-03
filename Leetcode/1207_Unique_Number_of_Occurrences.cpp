class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        unordered_set<int> seen;
        for(int i = 0 ;  i < arr.size() ; i++){
            freq[arr[i]]++;
        }
        for (auto x : freq) {
        if(seen.count(x.second)>0){
            return false;
        }
        seen.insert(x.second);
    
    }
    return true;
    }
};