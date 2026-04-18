#include <iostream>
using namespace std;
template <class T>
class Calculator
{
    private:
        T num1, num2;
    public:
    Calculator(T n1, T n2)
    {
        num1=n1;
        num2=n2;
    }
    void displayResult()
    {
        cout<<"Numbers are: "<<num1<<" and "<<num2<<endl;
        cout<<"Addition is: "<<add()<<endl;
        cout<<"Subtraction is: "<<subtract()<<endl;
        cout<<"Product is: "<<multiply()<<endl;
        cout<<"Divison is: "<<divide()<<endl;
    }
    T add()
    {
        return num1+num2;
    }
    T subtract()
    {
        return num1-num2;
    }
    T multiply()
    {
        return num1*num2;
    }
    T divide()
    {
        if(num2!=0)
            return num1/num2;
        else
        {
            cout<<"Error: Division by zero!"<<endl;
            return 0;
        }
    }
};
int main()
{
    Calculator <int> c1(3,6);
    Calculator <float> c2(3.5,6.2);
    cout<<c1.add()<<endl;
    cout<<c2.multiply()<<endl;
    c1.displayResult();
}