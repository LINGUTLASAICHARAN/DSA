#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m  = n;
    int tod[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tod[i][j];
        }
    }
    // int trans[m][n];
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //        trans[i][j] = tod[j][i];
    //     }
    // }
    //     for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout <<   trans[i][j] <<" ";
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            swap(tod[i][j] , tod[j][i]);
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout <<   tod[i][j] <<" ";
        }
        cout << endl;
    }
    
    return 0;
}