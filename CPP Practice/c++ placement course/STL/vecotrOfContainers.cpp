#include <bits/stdc++.h>
using namespace std;
void print(vector<pair<int , int>> v){
     cout << "size is  " << v.size()<<endl;
    for (int i = 0; i <v.size() ; i++)
    {
        cout<<v[i].first <<" "<<v[i].second<<endl;
    }
    
}
int main(){
    vector<pair<int , int>> vp = {{2,2},{3,5}};
    int n ;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p ,q;
        cin >>p>>q;
        vp.push_back({p,q}); // pair can be used with curly braces{}
    }
    
    print(vp);
    return 0;
}