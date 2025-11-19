//Write a program to input a 2-digit number and print the reversed number.
#include<iostream>
using namespace std;
int main(){
    int num,digit1,digit2;
    cout<<"Enter the two digit num: ";
    cin>>num;
    digit1=num%10;
    digit2=num/10;
    cout<<"The reverse of num is "<<digit1<<digit2;



}