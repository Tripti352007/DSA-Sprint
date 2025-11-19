// Write a program to input a double value and print only its decimal part.
#include<iostream>
using namespace std;
int main(){
    double value;
    cout<<"Print the double value: ";
    cin>>value;
    cout<<"The decimal part of the value is "<<value-(int)value;
    return 0;
}