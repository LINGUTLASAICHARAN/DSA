#include<bits/stdc++.h>

using namespace std;

void main(){

    // multiset<int> mst;
    int n ;
    cin >>n;
    int p1 = 0,p2 =0;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        a = ((rand()) %6) + 1;
        b = ((rand()) %6) + 1;
        cout << a <<endl<<b<<endl;
        if(a == b){
            cout << "tie";
        }
        if(a > b) {
            cout << "p1 wins";
            p1++;
            
            }
        else{
            cout << "p2 wins";
            p2++;
        }
        cout <<endl;
    }
    cout <<endl<<"p1 " <<p1<<" p2 "<<p2 <<" " << (p1 > p2 ? "p1 wins" : "p2 wins");
    
    // return 0;
}