#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i = 5;
    // int x = 2*i;
    // while (x--)
    // {
    //     cout<<x+1;
    // }
    // cout << endl;
    for(int j = 1; j <= i ; j++){
            int p = i-j;
            while (p--)
            {
                cout<<" ";
            }
            for(int t = 1 ; t <= j; t++)cout << "* ";
            cout << endl;
    }
 return 0;
}