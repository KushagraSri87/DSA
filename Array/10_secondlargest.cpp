#include<iostream>
using namespace std;

int secondlargest(int arr[],int n){
    int max=arr[0];
    int max2=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max2=max;
            max=arr[i];
            

        }
        else if(arr[i] < max && arr[i] > max2){
            max2=arr[i];

        }
    }
    return max2;
}

int main(){
    int arr[]={3,6,7,8,5};
    int n=5;
    cout << "The second largest element is " << secondlargest(arr,n) << endl;
    
}