#include <iostream>
using namespace std;
class complex
{
public:
    float a, b;

    void setNum(void)
    {
        cout << "Enetr the number" << endl;
        cin >> a >> b;
    }
    void displayNum(void)
    {
        cout << "The complex number is " << a << " + " << b <<" i"<< endl;
    }
};
complex sum(complex one, complex two)
{
    complex result;
    result.a = one.a + two.a;
    result.b = one.b + two.b;
    return result;
}
int main()
{
    complex n1, n2;
    n1.setNum();
    n2.setNum();
    sum(n1,n2).displayNum();
    return 0;
}