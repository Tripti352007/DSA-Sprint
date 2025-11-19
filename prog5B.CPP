//Write a program to input seconds and convert them into hours, minutes, and seconds.
#include<iostream>
using namespace std;
int main(){
    int total_sec,min,hours,sec;
    cout<<"Print the value of seconds: ";
    cin>>total_sec;
    hours= total_sec/3600;
    min=(total_sec%3600)/60;
    sec=total_sec%60;
    cout<<"After conversion the value is "<<hours<<"hours"<<min<<"minutes"<<sec<<"seconds";
}