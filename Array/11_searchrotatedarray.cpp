#include<iostream>
using namespace std;

int Pivot(int arr[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
 }
 return s;
    

}
int binarysearch(int arr[], int s,int e,int key){

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
int Search( int arr[],int n,int key){
    int p=Pivot(arr,n);
    if(key >= arr[p] && key <= arr[n-1]){
        return binarysearch(arr,p,n-1,key);

    }
    else{
        return binarysearch(arr,0,p-1,key);
    }


}



int main(){
    int arr[7]={4,5,6,7,0,1,2};
    int n=7;
    cout << " The key is at index :" << Search(arr,n,0) << endl;
}