#include<iostream>
using namespace std;


bool ispossible(int arr[],int n,int m,int mid){
    int student =1;
    int sum=0;
    for(int i = 0 ;i < n ; i++){
        if(arr[i] > mid){
            return false;
        }
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            student++;
              if(student>m){
            return false;
        }
        sum=arr[i];
        }
        
        
    }
    return true;

  int bookAllocation(int arr[], int n, int m){

    int s = arr[0];
    int sum = 0;

    // find max element and total sum
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(arr[i] > s){
            s = arr[i];
        }
    }

    int e = sum;
    int ans = -1;

    while(s <= e){
        int mid = s + (e - s)/2;

        if(ispossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

    return ans;
}


}
int main(){
    int arr[] = {10,20,30,40};
    int n = 4;
    int m = 2;

    cout << "Minimum pages: " << bookAllocation(arr, n, m) << endl;

    return 0;
}

