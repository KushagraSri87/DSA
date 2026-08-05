class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;
        vector<int> values1;
        vector<int> values2;
        for(int i = 0 ; i < word1.size() ; i++){
            freq1[word1[i]]++;

        }
        for( int j = 0 ; j < word2.size() ; j++){
            freq2[word2[j]]++;
        }
        for(auto x : freq1 ){
            if(freq2.count(x.first)==0){
                return false;
            }

        }
        for (auto x : freq1) {
            values1.push_back(x.second);
        }
        for( auto x : freq2){
            values2.push_back(x.second);

        }
        sort(values1.begin(), values1.end());
        sort(values2.begin(), values2.end());
        if (values1 == values2) {
            return true;
        }
        return false;
        
    }
};