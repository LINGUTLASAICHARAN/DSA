#include <iostream>
using namespace std;
typedef struct student{
    string name;
    int score; 
} stu ;
class Employee{
    int a ,b,c;
    public:
    int d,e;
    void getData(){
        cout<<"the value of a is "<< a << endl;
        cout<<"the value of b is "<< b << endl;
        cout<<"the value of c is "<< c << endl;
        cout<<"the value of d is "<< d << endl;
        cout<<"the value of e is "<< e << endl;
    }
    void setData(int a1,int b1, int c1 , int d1 , int e1);


};
void Employee :: setData(int a1,int b1, int c1 , int d1 , int e1){
    a = a1;
    b = b1;
    c = c1;
    d = d1;
    e = e1;
}

int main(){
    Employee saiCharan;
    saiCharan.setData(1,2,3,4,5);
    saiCharan.getData();
    return 0;
}