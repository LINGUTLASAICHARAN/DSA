#include<bits/stdc++.h>
using namespace std;
int t[100][100];
int RodCut(int length[],int price[],int n,int l){

    if(t[n][l] != -1) return t[n][l];

    if(l == 0 || n==0) return t[n][l] =  0;

    if(length[n-1] <=l){
        return t[n][l] = max(RodCut(length,price,n-1,l),price[n-1]+RodCut(length,price,n,l-length[n-1]));
    }
    else{
        return t[n][l] =  RodCut(length,price,n-1,l);
    }
}
int main()
{
    memset(t,-1,sizeof(t));
    // price information
    int lenght[] = {1,2,3,4,5,6,7,8}; // weight of item
    int price[] = {1,5,8,9,10,17,17,20}; // value of item
    int l = 8; // length of rod maps to capacity of knapsack
    int n = 8; // possible number of cuts maps to types of items 
    cout << RodCut(lenght,price,n,l)<<endl;


    // top down approach
    int dp[n+1][l+1];
    for (int i = 0; i < n+1; i++)
    {
        for(int j = 0;j<l+1;j++){
            if(i == 0 || j ==0){
                dp[i][j] =0;
            }
        }
    }

    for (int i = 1; i < n+1; i++)
    {
        for(int j = 1;j<l+1;j++){
            if(lenght[i-1] <= j){
                dp[i][j]=max(t[i-1][j],t[i][j-lenght[i-1]]+price[i-1]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][l];
 return 0;
}