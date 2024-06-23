#include<iostream>
using namespace std;

int main(){
    int a = 123;
    int first, second, third, n, sum;
    first = a%10;
    n = a/10;
    second = n%10;
    n = n/10;
    third = n;
    sum = first+second+third;
    cout<<"sum of digit 123 is : "<<sum<<endl;
}