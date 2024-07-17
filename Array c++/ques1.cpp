#include<iostream>
using namespace std;

int count_odd(int arr[], int n){
    int odd = 0;
    for(int i =0;i<n;i++){
        if(i%2 == 1){
            odd++;
        }
    }
    return odd;
}
int count_even(int arr[], int n){
    int even = 0;
    for(int i =0;i<n;i++){
        if(i%2 == 0){
            even++;
        }
    }
    return even;
}
int main(){
    int size;
    cin>>size;

    int arr[10];

    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Number of odd: "<<count_odd(arr,size)<<endl;
    cout<<"Number of even: "<<count_even(arr, size)<<endl;

}