#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter length: "<<endl;
    cin>>a;
    int b;
    cout<<"Enter breadth: "<<endl;
    cin>>b;

    if(a == b){
        cout<<"it is a square: ";
    }
    else{
        cout<<"It is a rectangle: ";
    }
}