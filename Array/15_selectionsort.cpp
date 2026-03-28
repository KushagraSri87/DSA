#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
      for(int i=0 ; i<n-1 ; i++){
        int minindex=i;
        for(int j=i+1 ; j < n ; j++){
          if(arr[j] < arr[minindex]){
            minindex=j;
                
        }

    }
    swap(arr[minindex],arr[i]);

}

}
   

int main(){
    int arr[5]={9,5,4,2,1};
    int n=5;
    selectionsort(arr,n);
    cout << " The sorted array is:"  << endl;
     for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
