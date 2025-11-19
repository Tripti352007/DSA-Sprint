//Write a program to input an integer and print its ASCII equivalent character if converted using char(x).
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Print an integer value: ";
    cin>>x;
    cout<<"The ASCII equivalent character is "<<(char)x;
    return 0;
}