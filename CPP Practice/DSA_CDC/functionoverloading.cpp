#include<iostream>
using namespace std;
int sum(float a, int b){
    cout << "using function with two arguments-->" ;
    return a+b;
}
int sum(int a, int b,int c){
    cout << "using function with two arguments-->" ;
   
    return a+b+c;
}
int main(){
    cout << sum(2,3)<<endl;
    cout << sum(1,2,3);
    string a;
    return 0;
}