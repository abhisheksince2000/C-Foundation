#include<iostream>
using namespace std;
int minOfA(int arr[], int n){
    int min = INT8_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int minOfB(int arr[], int n){
    int min = INT8_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
void sum(int arrA[], int arrB[], int n){
    int lowestSum = minOfA(arrA,n)+minOfB(arrB,n);
    cout<<lowestSum<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[5];
    int b[5];

    cout<<"Enter of array A: ";
    for(int i= 0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Enter of array B: ";
    for(int i = 0;i<n;i++){
        cin>>b[i];
    }
    cout<<minOfA(a,n)<<endl;
    cout<<minOfB(b,n)<<endl;
    sum(a,b,n);
}