//Write a program to input a 3-digit number and print the sum of its digits.
#include<iostream>
using namespace std;
int main(){
    int num,digit1,digit2,digit3,sum;
    cout<<"Enter the three value number ";
    cin>>num;
    cout<<"digit1 is "<<num%10<<endl;
    cout<<"digit2 is "<<(num/10)%10<<endl;
    cout<<"digit3 is "<<num/100<<endl;
    digit1=num%10;
    digit2=(num/10)%10;
    digit3=num/100;
    cout<<"The sum of three digit is "<<digit1+digit2+digit3;
}