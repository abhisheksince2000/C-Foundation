// Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"take 5 digits only: "<<endl;
    cin>>a;
    int first, second1, second2;
    first = a/10000;
    cout<<first<<endl;
    second1 = a/10;
    second2 = second1%10;
    cout<<second2<<endl;
    cout<<"sum of first and second last digit: "<<first+second2<<endl;

}