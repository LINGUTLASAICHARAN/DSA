#include<bits/stdc++.h>

using namespace std;
bool cpm(pair<int,pair<long , long>> a,pair<long,pair<long,long>>b){
        if((a.second.first + a.second.second) != (b.second.first+b.second.second)){
            return (a.second.first + a.second.second) < (b.second.first+b.second.second);
        }
        else{
            return a.second.first < b.second.first;
        }
}



int main(){

    int t;
    cin >>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int,pair<long ,long>>> v(n);
        for (int i = 0; i < n; i++)
        {
            int a , b;
            cin >> a >>b;
            v[i] = {i,{a,b}};
        }
        sort(v.begin() ,v.end(),cpm);
        vector<int> ans(n);
        for(int i = 0;i<n;i++){
            ans[v[i].first] = i;
        }
        for(auto & a : ans){
            cout <<a<<" ";

        }
        cout <<endl;
        
    }
    




    return 0;
}