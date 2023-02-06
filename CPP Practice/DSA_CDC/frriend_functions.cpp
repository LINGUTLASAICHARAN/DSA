#include <iostream>
using namespace std;
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
    friend Complex add(Complex, Complex); // friend function template
};
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.setNum(a.a + b.a, a.b + b.b);
    return sum;
}
int main()
{
    Complex num;
    num.setNum(1, 5);
    num.printNum();

    return 0;
}