#include<iostream>
using namespace std;

int sqrt(int n){
    int s=0;
    int e=n;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}


int main(){
    int n;
    cout << "Enter Number: ";
    cin >>n;

    cout << "Square root(floor) is: " << sqrt(n) << endl;
}