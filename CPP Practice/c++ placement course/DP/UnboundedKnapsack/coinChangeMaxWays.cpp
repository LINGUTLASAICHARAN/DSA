#include<bits/stdc++.h>
using namespace std;
// like subset sum but infinite supply of each value
int coinChange(int c[],int n , int sum){
    if(sum == 0)return 1;
    if(n == 0) return 0;

    if(c[n-1]<= sum){
        return coinChange(c,n-1,sum) + coinChange(c,n,sum-c[n-1]);
    }
    else{
        return coinChange(c,n-1,sum);
    }
}
int main()
{
    int coin[] = {2,1,3};
    int sum = 5;
    int n = 3;
    cout<<coinChange(coin,n,sum)<<endl;

    // Dp approach
    int dp[n+1][sum+1];
    // initialization
    for (int i = 0; i < n+1; i++)
    {
        for(int j = 0 ; j <sum+1;j++){
            if(i==0){
                dp[i][j] = 0;
            }
            if(j==0){
                dp[i][j] = 1;
            }
        }
    }
    
    for (int i = 1; i < n+1; i++)
    {
        for(int j = 1;j<sum +1 ;j++){
            if(coin[i-1] <= j){
                dp[i][j]= dp[i-1][j]+dp[i][j-coin[i-1]]; // include both ways but when picked do be done with it
            }
            else{
                dp[i][j]= dp[i-1][j];
            }
        }
    }
    //******* last row contains solutions of many problems
    cout<<dp[n][sum]<<endl;
 return 0;
}