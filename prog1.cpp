//Write a program to take two integers as input and print their sum, difference, product, and quotient (integer division only).
# include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Print the value of a and b - "<<endl;
    cin>>a>>b;
    int sum=a+b;
    cout<<"The sum of a and b is "<<sum<<endl;
    int difference=a-b;
    cout<<"The difference of a and b is "<<difference<<endl;
    int product=a*b;
    cout<<"The product of a and b is "<<product<<endl;
    int quotient=a/b;
    cout<<"the quotient of a and b is "<<quotient<<endl;
    return 0;
}