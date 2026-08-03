class Solution {
public:
    int maxVowels(string s, int k) {
        int vowelCount=0;
        for(int i = 0; i < k ; i++ ){
            if(s[i]=='a'|| s[i]=='i' || s[i]=='e' || s[i] == 'o' || s[i] =='u'){
                vowelCount++;
            }
        }
            int maxVowel=vowelCount;
            for(int i = k; i < s.size() ; i++){
                if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u'){
                    vowelCount--;
                }
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                    vowelCount++;
                }
                if(vowelCount>maxVowel){
                    maxVowel=vowelCount;
                }

                
            }
        
        return maxVowel;
        
       
    }
};