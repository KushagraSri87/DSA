#include<iostream>
using namespace std;

int firstoccurence(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int ans=0;
    while(s<=e){
        
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
                s=mid+1;
            }

        else{
                e=mid-1;
            }

        }
        return ans;
    }
    




int main(){
    int arr[]={1,2,2,2,3};
    int n=5;

    cout << "The Index of Firstoccurence is " << firstoccurence(arr,n,2) << endl;

    
}