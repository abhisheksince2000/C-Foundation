#include<iostream>
using namespace std;
int range(int arr[], int n){
    int missing = -1;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum+arr[i];
    }
    int range_sum=(n)*(n+1)/2;
missing=range_sum-sum;
return missing;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<range(arr,n);
}