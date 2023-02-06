#include <bits/stdc++.h>
using namespace std;
bool is2Pow(int n ){
    //normal method
    int div = 1;
    while(div <= n){
        if(n == div) return true;
        div *=2;
    }
    return false;
}
bool is2Powb(int n ){
    //bit manip method
    return false;
}

int main(){
    cout << is2Pow(10) << endl;
   
    return 0;
}