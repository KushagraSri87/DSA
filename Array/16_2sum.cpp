#include<iostream>
using namespace std;

void twoSum(int arr[], int n, int target){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j]==target){
                cout << i << " " << j;
                return;

            }
        }
    }
    
}

int main(){
    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    twoSum(arr, n, target);

    return 0;
}