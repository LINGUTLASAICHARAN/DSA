#include<bits/stdc++.h>
using namespace std;
int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int w = 50;
    int n = sizeof(val) / sizeof(val[0]);

    int t[n+1][w+1]; // n ranges form 0 to n hence n+1 size

    // initialisation for base case
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < w+1; j++)
        {
            if(j == 0 || w == 0) t[i][j] = 0;
        }
        
    }

    // decison making

    for (int i = 1; i < n+1; i++)
    {
        for(int j = 1; j < w+1;j++){
            // i --> n
            // j --> w
            // t[i][j] --> return that is the ans for the sub-problem

            if(wt[i-1] <= j){
                t[i][j] = max(t[i-1][j],val[i-1]+t[i-1][j-wt[i-1]]);
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    
    cout << t[n][w] <<endl;
    
 return 0;
}