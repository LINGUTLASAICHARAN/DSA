#include <bits/stdc++.h>
using namespace std;
void print(vector<pair<int , int>> v){
     cout << "size is  " << v.size()<<endl;
    for (int i = 0; i <v.size() ; i++)
    {
        cout<<v[i].first <<" "<<v[i].second<<endl;
    }
    
}
void printvec(vector<int> &v){
     cout << "size is  " << v.size()<<endl;
    for (int i = 0; i <v.size() ; i++)
    {
        cout<<v[i]<<" "<<endl;
    }
    v.push_back(-6);
}
int main(){
    // vector<pair<int , int>> a;
    // int n;
    // cin >> n; 
    // for (int i = 0; i < n; i++)
    // {
    //     int p , q;
    //     cin >>p>>q;
    //     a.push_back(make_pair(p,q));
    //     print(a);
    // }
    vector<int> v1(5,-2); // initialize it with 5 -2's at the start
    v1.push_back(655);
    printvec(v1);
    v1.pop_back();
    printvec(v1);
    vector<int > v2 = v1;
    v2.push_back(6546);
    printvec(v2);
    return 0;
}