#include<iostream>
using namespace std;

int main(){
    int cp, sp, profit, loss;
    cout<<"Enter the cost price: "<<endl;
    cin>>cp;
    cout<<"Enter the selling price: "<<endl;
    cin>>sp;

    if(sp>cp){
        profit = sp-cp;
        cout<<"Profit = "<<profit<<endl;
    } else {
        loss = cp-sp;
        cout<<"Loss = "<<loss<<endl;
    }
}