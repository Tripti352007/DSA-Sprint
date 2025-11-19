//Write a program to input a double value and print its integer part using type casting.
#include<iostream>
using namespace std;
int main(){
    double value;
    cout<<"Print the value is ";
    cin>>value;
    cout<<"The integer part of the value is "<<(int)value;
    return 0;
}