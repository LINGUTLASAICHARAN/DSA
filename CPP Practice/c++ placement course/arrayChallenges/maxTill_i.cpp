// given array of elements output for all i = 0 to n-1  max(a[0] , a[1] , ...... , a[i])

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10] = {2 , 3 , -1 ,5 , 33 , 55 , -40 , 8 , -9 , 100};
    int mx = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
       
        mx = max(mx , a[i]);
        cout << mx << endl;
        
    }
    
    return 0;
}