/*Write a program to input three integers a, b, c and print the value of the expression:
`a + b * c - (++b)`
*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three integer number: ";
    cin>>a>>b>>c;
    cout<<"The value of a+b*c-(++b) is "<<a+b*c-(++b)<<endl;
    return 0;
}