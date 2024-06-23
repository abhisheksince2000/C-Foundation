#include<iostream>
using namespace std;

int main(){
    char opr;
    cout<<"Enter an operator(+,-,*,/): ";
    cin>>opr;
    float a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;

    switch (opr)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;  
    case '*':
    cout<<a*b<<endl;
    break;

    case '/':
    cout<<a/b<<endl;
    break;  
    default:
        break;
    }
}