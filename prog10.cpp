//Write a program to input a character and print the next character using pre-increment (++).
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Print a character: ";
    cin>>ch;
    cout<<"The next character is "<<++ch;
    return 0;
}