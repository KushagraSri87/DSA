#include<iostream>
using namespace std;

void reversearr(int arr[], int n){
    int start = 0;
    int end = n - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1,3,5,6,7,9};
    int n = 6;

    reversearr(arr, n);

    cout << "The reverse array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}