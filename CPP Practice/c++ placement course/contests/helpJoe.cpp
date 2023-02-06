#include<bits/stdc++.h>

using namespace std;
/*
    O(n * nq)
*/
int main(){
    int n,m;
    cin >>n >>m;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
     cin >> v[i];   
    }

    int nq;
    cin >> nq;
    for (int i = 0; i < nq; i++)
    {
        int q;
        long long mx = -1;
        cin >> q;
        for(auto & e : v){
            mx = max(mx , ((e + q)% m));
        }
        cout << mx <<endl;
    }
    
    

    return 0;
}