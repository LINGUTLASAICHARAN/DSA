#include <bits/stdc++.h>
using namespace std;

int clear(int a , int bit){
    return (a & ~(1<<(bit-1)));
}

int updateBit(int a , int bit , int pos){
    a = ~(1<<pos-1) & a; // first clear
    return (a |(bit << pos-1)); // set but if the bit is 0 then it will not be set but only cleared
}
int main(){
    cout << updateBit(8,1,1);
    return 0;
}