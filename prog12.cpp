/*### **Write a program to input an integer and print:**

- value before post-increment (`x++`)
- value after post-increment
- value after pre-increment (`++x`)
*/
# include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Print the value of x is ";
    cin>>x;
    cout<<"Value before post increment is "<<x++<<endl;
    cout<<"Value after post-increment is "<<x<<endl;
    cout<<"Value after pre-increment is "<<++x<<endl;
    return 0;
}