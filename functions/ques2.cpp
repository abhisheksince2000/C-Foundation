#include<iostream>
using namespace std;
float circ(int r){
    float cir = 2*3.14*r;
    return cir;
}
float areaOfCircle(int r){
    float area = 3.14*r*r;
    return area;
}

int main(){
    int n;
    cin>>n;
    cout<<circ(n)<<endl;
    cout<<areaOfCircle(n)<<endl;
}