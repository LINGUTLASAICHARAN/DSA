#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int tod[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tod[i][j];
        }
    }
   // printing 2-d array
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << tod[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    int key ;
    cin >> key;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
        if(tod[i][j] == key){
            flag = true;
            cout << "found";
            
        }
       }
       
    }
    if(!flag){
        cout << "not found";
    }
    
    return 0;
}