#include <bits/stdc++.h>
using namespace std;
int getBit(int a , int i){
    return ((a & (1<<i) )!= 0);
    /*
    int k = (1<<i); 
    int ans = a & k; 
    ans = (ans >>i); 
    cout <<ans<< endl;
*/
}
int setBit(int a , int i){
    return(a | (1<<i));

}
int clearBit(int a , int i){
    int b = ~(1<<i);
    return (b&a);

}
int updateBit(int a , int i , int bit){
    // if(bit = 1){
    //     return setBit(a ,i);
    // }
    // else{
    //     return clearBit(a,i);
    // }
    a = a & (~(1<<i)); // cleared position i
    return a | (bit << i); // if bit = 1 set or do noting leaving it cleared as done already 

}

int main(){
   cout <<  getBit(8 ,3 )<<endl;
//    cout << setBit(5,1) << endl; 
//    cout << clearBit(5,2) << endl;
//    cout <<updateBit(5,1,1) << endl;
    return 0;
}