/*Write a program to input two integers `a` and `b` and print:
- `(a * b) % 10`
- `(a + b) % 5`
*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"The value of (a * b) % 10 is "<<(a * b) % 10<<endl;
    cout<<"The value of (a + b) % 5 is "<<(a + b) % 5;
    return 0;
}