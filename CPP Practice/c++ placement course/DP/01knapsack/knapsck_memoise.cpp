#include<bits/stdc++.h>
using namespace std;

int t[1000][1000]; // decide on sixe of t from constraints of problem

int KSK(int weight[],int values[],int n, int w){

    if(t[n][w] != -1) return t[n][w]; // use previously saved value


    if(w == 0|| n == 0) return t[n][w] = 0;

    if(weight[n-1] <= w){
        return t[n][w] = max(KSK(weight,values,n-1,w),KSK(weight,values,n-1,w-weight[n-1])+values[n-1]);
    }
    else{
        return t[n][w] = KSK(weight ,values , n-1,w);
    }
}
int main()
{

    memset(t,-1 ,sizeof(t)); // to initialize array with -1
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout <<KSK(wt,val,n,W)<<endl;
    return 0;
}