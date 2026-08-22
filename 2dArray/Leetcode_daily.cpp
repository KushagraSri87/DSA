class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0 ;
        int prod  = 1;
        while(temp>0){
            sum += temp%10;
            temp /= 10;
        }
         temp = n;
        while(temp>0){
            prod *= temp%10;
            temp /= 10;
        }       
        if(n % (sum+prod)==0){
            return true ;
        }
        else{
            return false;
        }
    }
};