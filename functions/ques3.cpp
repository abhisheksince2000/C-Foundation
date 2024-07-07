#include<iostream>
using namespace std;
bool eligibleAge(int x){
    if(x >= 18){
       return true;
    } else {
        return false;
    }   
}

int main(){
    int age;
    cin>>age;
    if(eligibleAge(age) == true){
        cout<<"yes";
    } else 
    cout<<"no";
}   