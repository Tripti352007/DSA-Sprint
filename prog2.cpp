//Write a program to take an integer x as input and print the result of ++x, x++, and the final value of x.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Print the value of x: ";
    cin>>x;
    cout<<"The value of ++x is "<<++x<<endl;
    cout<<"The value of x++ is "<<x++<<endl;
    return 0;
}
