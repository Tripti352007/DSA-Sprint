//Write a program to input an ASCII value (integer) and print the corresponding character.
#include <iostream>
using namespace std;
int main(){
    int ascii_value;
    cout<<"Print the ascii value: ";
    cin>> ascii_value;
    cout<<"The Character is "<<(char)ascii_value;
    return 0;
}