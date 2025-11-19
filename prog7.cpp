/*Write a program to input an integer and print the value of:
- x + 5
- x - 3
- x * 2
- x / 2
- x % 2 */
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Print the value of x is ";
    cin>>x;
    cout<<"The value of x when x=x+5 is "<<x+5<<endl;
    cout<<"The value of x when x=x-3 is "<<x-3<<endl;
    cout<<"The value of x when x=x*2 is "<<x*2<<endl;
    cout<<"The value of x when x=x/2 is "<<x/2<<endl;
    cout<<"The value of x when x=x%2 is "<<x%2<<endl;
    return 0;
}
