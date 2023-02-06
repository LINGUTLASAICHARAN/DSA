#include <iostream>
using namespace std;
// class Calc;
// This is called foward declartion
class Complex
{
    int a, b;

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNum()
    {
        cout << "The  number is " << a << " + " << b << "i";
    }
    //
    friend class Calc;
};
class Calc
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sum_real(Complex o1, Complex o2)
    {
        return add(o1.a, o2.a);
    }
    int sum_comp(Complex o1, Complex o2)
    {

        return o1.b + o2.b;
    }
};



int main()
{
    Complex num1, num2;
    num1.setNum(1, 4);
    num2.setNum(3, 3);
    Calc dev;
    cout << dev.sum_real(num1, num2) << endl;
    cout << dev.sum_comp(num1, num2) << endl;
    return 0;
}
