#include<iostream>
using namespace std;
int element(int arr[], int n){
    int ele = -1, big = arr[0],small = arr[n-1];
    int max[n];
    int min[n];
    
    for(int i = 0;i<n;i++){
        if(arr[i]>big){
            big = arr[i];
            max[i] = big;
        }
    }
    for(int i = n-1;i>=0;i--){
        if(arr[i]<small){
            small = arr[i];
            min[i] = small;
        }
    }
    for(int i =0;i<n;i++){
        if(i != 0 && i != n-1 && max[i] == min[i]){
            ele = min[i];
            break;
        } 
    }
    return ele;
}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<element(arr,n);
}