#include<bits/stdc++.h>

using namespace std;

int main(){
    multiset<string> mst;
    mst.insert("we");
    mst.insert("abc");
    mst.insert("are");
    mst.insert("we");
    // mst.erase("we");
    // mst.erase(mst.find("we"));
    for(auto &it : mst){
        cout << it <<endl;
    }

    cout <<"--question--" <<endl;
    int t;
    cin >>t;
    while (t != 0)
    {
        long long ans = 0;
        int  n , k;
        cin >> n >> k;
        multiset<long long> mst; // long long is data type not two data types
        for (int i = 0; i < n; i++)
        {
            long long p;
            cin >>p;
            mst.insert(p);
            
        }
    for (int  i = 0; i < k; i++)
    {
        // multiset<int> :: iterator it = mst.end();
        auto it = mst.end();
        it--;
        ans += (*it);
        // *it  /= 2; // cannot change keys
        mst.erase(it);
        mst.insert((*it)/2);
    }
    

    cout << ans <<" ";
        t--;
    }
    
    

    return 0;
}