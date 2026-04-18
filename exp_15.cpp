#include<iostream>
using namespace std;

template<class T>
void swapData(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x=10, y=20;
    swapData(x,y);
    cout<<"After swap: "<<x<<" "<<y<<endl;
    return 0;
}