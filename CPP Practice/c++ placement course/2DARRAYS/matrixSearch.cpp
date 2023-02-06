#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    int k;
    cin >> n >> m >> k;
    int ma[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ma[i][j];
        }
    }
    // brute force would be O(n*m) normal liner search
    // optimised approach O(m+n)
    int i = 0 , j = m -1 ; 
    bool flag  = false;
    while(i < n && j >= 0){
        if(ma[i][j] == k){
            flag = true;
            cout << i << " " << j << endl;
            cout << "found";
            break;
        }
        else if(ma[i][j] > k){
            j--;
        }
        else{
            i++;
        }
    }
    if(!flag){
        cout << "not found";
    }
    return 0;
}