#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter positive number: ";
    cin>>num;
    try
    {
        if(num==0)
        throw 'x';
        else if(num<0)
        throw num;
        else
        cout<<"\n Number+"<<num;
    }
    catch(int num)
    {
        cout<<"\n"<<num<<" is negative number";
    }
    catch(char msg)
    {
        cout<<"\n The number is zero";
    }
}