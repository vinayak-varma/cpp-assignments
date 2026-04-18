#include <iostream>
using namespace std;
template <class T>
class Box
{
    private:
    T value;
    public:
    Box(T v): value(v) {}
    void show()
    {
        cout<<"Value :"<<value<<endl;
    }
};
int main()
{
    Box<int> intBox(123);
    Box<double> doubleBox(45.67);
    Box<string> stringBox("Template Demo");
    intBox.show();
    doubleBox.show();
    stringBox.show();
}