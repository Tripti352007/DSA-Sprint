//Write a program to input a character and print the previous character using decrement operator.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Print the character: ";
    cin>>ch;
    cout<<"The previous character is "<<--ch;
    return 0;
}