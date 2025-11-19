// Write a program to input two integers a and b, convert them into double using type casting, and print the floating division result.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Print the value of a and b is ";
    cin>>a>>b;
    cout<<(double)a<<(double)b;
    cout<<"The value of division is "<<(float)a/b;
   return 0;
}