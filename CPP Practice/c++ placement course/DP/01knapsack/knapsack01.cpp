#include<bits/stdc++.h>
using namespace std;

int KSK(int weight[],int values[],int n, int w){
    if(w == 0|| n == 0) return 0;

    if(weight[n-1] <= w){
        return max(KSK(weight,values,n-1,w),KSK(weight,values,n-1,w-weight[n-1])+values[n-1]);
    }
    else{
        return KSK(weight ,values , n-1,w);
    }
}
int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout <<KSK(wt,val,n,W)<<endl;
    return 0;
}