#include <bits/stdc++.h>
using namespace std;
void fib(int n)
{
    int t1 = 0, t2 = 1, next;
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    cout << endl;
}
int fact(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int nCr(int n , int r){
    return fact(n)/(fact(r) * fact(n-r));
}
void pascal(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout <<nCr(i , j) << " ";
        }
        cout <<endl;
    }
    
    
}
int main()
{
    int n;
    cin >> n;
    pascal(n);
    return 0;
}