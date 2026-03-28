#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;

    while(s <= e){
        int mid = s + (e - s) / 2;

        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    return -1;
}

int main(){
    int arr[] = {1,3,5,7,9};
    int n = 5;

    cout << "Index: " << binarysearch(arr, n, 7) << endl;

    return 0;
}