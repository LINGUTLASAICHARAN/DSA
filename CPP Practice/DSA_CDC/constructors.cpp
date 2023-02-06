#include <iostream>
using namespace std;
class Cons{
int a,b;

    public:
Cons(int c , int d){
    a = c;
    b = d;
    cout <<"Hello World !"<<endl;
}
Cons(void){
    cout << "This is constuctor with no arguents";
}
};
int main()
{
Cons a(2,2);
Cons b;
    return 0;
}