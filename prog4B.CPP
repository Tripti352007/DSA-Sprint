//Write a program to input total minutes and convert it into hours and minutes.
#include<iostream>
using namespace std;
int main(){
    int total_min;
    cout<<"Enter the minutes: ";
    cin>>total_min;
    int hour=total_min/60;
    int min=total_min%60;
    cout<<"The value in hours and minutes is "<<hour<<"hours"<<min<<"minutes"; 
    return 0;
}