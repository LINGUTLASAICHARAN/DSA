#include <bits/stdc++.h>
using namespace std;

int main(){
    int *a ;
    a = new int(10);
    // delete(a); //deallocate that memory
    cout << *a;
    int * arr = new int[4];
    delete [] arr;// deallocating array
    return 0;





}