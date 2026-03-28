#include<iostream>
using namespace std;

int Peak(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;

}
int main(){

    int arr[] = {1,3,5,7,6,4,2};
    int n = 7;

    cout << "Peak element index is: " << Peak(arr, n) << endl;

    return 0;
}
