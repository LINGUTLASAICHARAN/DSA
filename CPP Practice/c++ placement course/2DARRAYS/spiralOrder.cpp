#include <bits/stdc++.h>
using namespace std;


int main(){
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
    int row_start = 0, row_end = n-1 , col_start = 0 , col_end = m-1;
    while (row_start <= row_end && col_end >= col_start)
    {   
        // row_start from col_start to col_end
       for (int i = col_start; i <=col_end; i++)
       {
        cout << tod[row_start][i]<<" ";
       }
       row_start++; // make sure repeated printing is not done
    //   col_end from row_satrt to row_end
       for (int i = row_start; i <=row_end; i++)
       {
        cout <<tod[i][col_end] << " ";
       }
       col_end--;// make sure repeated printing is not done
       //row_end from  col_end to col_start
       for (int i = col_end; i >=col_start; i--)
       {
        cout << tod[row_end][i]<<" ";
       }
       row_end--;// make sure repeated printing is not done
       //col_start from row_end to row_start
       for (int i = row_end; i >= row_start; i--)
       {
        cout <<tod[i][col_start] <<" ";
       }
       col_start++;// make sure repeated printing is not done
    }
     

    return 0;
}