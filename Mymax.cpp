#include<iostream>
using namespace std;


 int maxarr(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
       if(arr[i]>max){
         max=arr[i];
       }
    }
    return max;

}
int main(){
    int arr[]={2,5,4,7,9,2,13};
    int n=7;
    cout << "The max value is " << maxarr(arr,n) << endl;


}