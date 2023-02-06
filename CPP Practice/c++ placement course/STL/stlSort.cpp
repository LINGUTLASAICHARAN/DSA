#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n); // sort form address a to (a+n) -1
    // first address where sorting starts and the last address which is next to the last element
    // intro sort : quick sort heap sort insertion sort
    for(auto &ele : a){
        cout <<ele <<" ";
    }
    cout <<endl;
    int k;
    cin>>k;
    vector<int> v;
    while (k--)
    {
        int p;
        cin >>p;
        v.push_back(p);
    }
    sort(v.begin()+1,v.end()-1); // start from index 2 sort till last but 1 index
    for(auto & ele : v){
        cout <<ele <<" ";
    }
    cout <<endl;
    return 0;
}