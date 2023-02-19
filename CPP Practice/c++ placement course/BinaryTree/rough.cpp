#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<set<int>,string> mp; // set can be a kay for a stl map
    mp.insert({{1,2,3},"s1"});
    set<int> st = {1,3,2};
    cout<<mp[st]<<endl;

    cout<<max(1,2)<<endl;
 return 0;
}