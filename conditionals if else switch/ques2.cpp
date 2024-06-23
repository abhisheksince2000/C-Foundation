#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    if(a<0){
        a = a*(-1);
        cout<<a<<endl;
    }else {
        cout<<"This is already absolute: "<<a<<endl;
    }
}