/*### **Write a program to input two float numbers and print:
- sum
- difference
- product
- division
*/
#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    cout<<"print the two number: ";
    cin>>num1>>num2;
    cout<<"The sum of two number is "<<num1+num2<<endl;
    cout<<"The difference of two number is "<<num1-num2<<endl;
    cout<<"The product of two number is "<<num1*num2<<endl;
    cout<<"The division of two number is "<<num1/num2<<endl;
    return 0;
}