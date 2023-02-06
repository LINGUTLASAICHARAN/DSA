#include <bits/stdc++.h>
using namespace std;
// arithematic array if arry in A.P

int main(){
    int a[] =  {10 , 7 , 4 , 6 , 8 , 10,11 };
    int pd = a[1] - a[0];
    int ans = 2 , curlen = 2;
    for (int j = 2; j < 7; j++)  // keeping track of previous data and updating it along the traversal
    { 
        if(pd == a[j] - a[j-1]){
            curlen++;
        }
        else{
            pd = a[j] - a[j-1] ;
            curlen = 2;
        }
        ans = max(ans , curlen);
    }
    cout << ans;
    return 0;
}