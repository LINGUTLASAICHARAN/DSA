#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {33,32,-3,100,1,3,0,5};
    sort(a.begin(),a.end());
    for(auto &e :  a){
        cout <<e<<" ";
    }
    cout<< endl;
    cout<< *upper_bound(a.begin(),--(--a.end()),100) << endl;

    vector<int> :: iterator it ;
    for(it = a.begin();it != a.end();it++){
        cout <<*it<<" ";
    }
    cout << endl;
 return 0;
}