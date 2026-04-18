#include <iostream>
using namespace std;
void upd(int *x)
{
    *x=50;
}
int main()
{
    int a=10;
    upd(&a);
    cout<<a;
}