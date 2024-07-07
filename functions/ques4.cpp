#include<iostream>
using namespace std;
void odd(int x, int y){
    for(int i = x;i <= y;i++){
        if(i%2 == 1){
            cout<<i<<" ";
        }
        
    }
    
}

int main(){
    int a,b;
    cin>>a>>b;
    odd(a,b);
    return 0;

}   