// Write a program to input a floating number and print it rounded down using type casting (convert to int).
#include<iostream>
using namespace std;
int main(){
    float num;
    cout<<"Enter the num value: ";
    cin>>num;
    cout<<"The rounded down using type casting is "<<(int)num;
    return 0;
}