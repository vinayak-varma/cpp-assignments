//Write C++ program to swap integer values using function
#include <iostream>
using namespace std;
void swapIntegers(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int num1,num2;
    cout<<"Enter first integer: ";
    cin>>num1;
    cout<<"Enter second integer: ";
    cin>>num2;
    cout<<"\nBefore swapping:"<<endl;
    cout<<"num1 = "<<num1<<", num2 = "<<num2<<endl;
    swapIntegers(num1,num2);
    cout<<"\nAfter swapping:"<<endl;
    cout<<"num1 = "<<num1<< ", num2 = "<<num2<<endl;
    return 0;
}