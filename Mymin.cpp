#include<iostream>
using namespace std;

int minarr(int arr[],int n){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];

        }
    }
    return min;

}


int main(){
    int arr[]={3,5,6,4,7,1};
    int n=6;

    cout << "The min element of the array is " << minarr(arr,6) << endl;
}