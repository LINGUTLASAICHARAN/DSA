#include <bits/stdc++.h>
using namespace std;

int main(){
    int amount , price , w;
    cin >> amount >> price >>w;
    int cho , wrap =0, count = 0;  // here count is needed to seperate the newly generated chocolates from previously counted ones
    cho = amount / price;
    while(cho > 0 || wrap >=w){
        count += cho;
        wrap += cho;
        cho = 0;
        cho += wrap/w;
        wrap = wrap % w; 
        // cout << "count at the end of loop " << count << endl ;
      }
    cout << count ;
    return 0;
}