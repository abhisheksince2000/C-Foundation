#include<iostream>
using namespace std;
int getMin(int arr[],int n){
    int min = INT8_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int getMax(int arr[],int n){
    int max = INT8_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int sumofgs(int arr[], int n){
    int sum = getMax(arr,n)+getMin(arr,n);
}

int main(){
    int n;
    cin>>n;

    int arr[10];

    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum of greatest and smallest: "<<sumofgs(arr, n)<<endl;
}