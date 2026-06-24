#include<iostream>
using namespace std;
void merge(int a[] , int n , int b[] , int m , int c[]){
    int i=0 ,j=0;
    int k=0;
    while(i<n && j < m){
        if(a[i]<b[j]){
            c[k] =a[i] ;
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
     while(i<n){
             c[k] =a[i] ;
             i++;
             k++;
        }
     while(j<m){
             c[k] =a[j] ;
             j++;
             k++;
            }
        }
    void print(int ans[] , int n ){
        for(int i=0 ; i < n ; i++ ){
            cout <<  ans[i]  << " ";
        }
        cout << endl;
    }
int main(){
    int a[5]={1,3,5,7,9};
    int n=5;
    int b[3]={2,4,6};
    int m=3;
    int c[8]={0};
    merge(a , 5 , b , 3 , c );
    print(c,8);
    return 0;

}