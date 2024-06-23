// There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
// girls received grades "A" if 17 boys made up 80% of the students that received grades "A".

#include<iostream>
using namespace std;

int main(){
    int pupils, boys, girls, grade_A;
    pupils = 45;
    boys = 17;
    grade_A= pupils*80/100;
    cout<<"total no. of students got grade A: "<<grade_A<<endl;
    girls = grade_A - boys;
    cout<<"no. of girls getting grade A: "<<girls<<endl;
}