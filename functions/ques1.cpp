#include<iostream>
using namespace std;
int square(int num ){
    int sq = num*num;
    return sq;
}

int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        cout<<square(i)<<" "<<endl;
    }
}