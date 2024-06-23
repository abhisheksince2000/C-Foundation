#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your obtaining marks: "<<endl;
    cin>>marks;

    if((marks <=100) && (marks >= 90)){
        cout<<"your grade is A+";
    } else if(marks >=80 && marks <= 90){
        cout<<"your grade is A";
    } else if(marks >= 70 && marks <= 80){
        cout<<"your grade is B+";
    } else if(marks >= 60 && marks <= 70){
        cout<<"your grade is B";
    } else if(marks >= 50 && marks <= 60){
        cout<<"your grade is C";
    } else if(marks >= 40 && marks <= 50){
        cout<<"your grade is D";
    } else if(marks >= 30 && marks <= 40){
        cout<<"your grade is E";
    } else if(marks >= 30 && marks <= 0){
        cout<<"your grade is F";
    } else {
        cout<<"Please enter valid Number";
    }
}