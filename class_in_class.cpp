#include <iostream>
using namespace std;
class Outer
{
public:
    void display()
    {
        cout<<"This is the outer class"<<endl;
    }
    class Inner
    {
    public:
        void display()
        {
            cout<<"This is the inner class"<<endl;
        }
    };
};
int main()
{
    Outer outer;
    outer.display();
    Outer::Inner inner;
    inner.display();
    return 0;
}