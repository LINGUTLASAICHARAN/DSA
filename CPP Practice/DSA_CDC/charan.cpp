#include <bits/stdc++.h>
using namespace std;

void f() throws(float)
{

    throw 10.0f;
}

int main(){
    try{
        cout <<'A';
        f();
        cout<<'B';

     

    }
            catch(...){
            cout<<'C';
        }
    return 0;
}