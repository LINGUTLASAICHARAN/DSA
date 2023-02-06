#include<bits/stdc++.h>

using namespace std;

int main(){

    map<pair<int,int>,int> mp; // keys just have to be comparable as that is how they are inserted in to R-B tree
    pair<int ,int> a = {2,2} ,b = {1,5}; 
    // values can be any datatype not necessarily comparable types
    cout << (a <b) << endl;
    set<int> as = {1,2,3,4,5,6} , bs = {1,33,5654,64,543,43,32};
    cout << (as < bs) << endl; // sets are also comparable hence can be keys in maps

    map<pair<string , string>,vector<int>> mmp;
    int n ;
    cin >>n;
    for (int i = 0; i < n; i++)
    {
        string fn , ln;
        int ct;
        cin >>fn>>ln>>ct;
        // vector<int> v;// wasting sace for vector
        while (ct--)
        {
            int  k ;
            cin >> k;
            // v.push_back(k);
            mmp[{fn,ln}].push_back(k);

        }
        // mmp.insert({{fn , ln },v});
        // mmp[{fn,ln}] = v;  //map[key]
    }

    // printing
    for(auto & pr : mmp){
        cout << pr.first.first << " " << pr.first.second <<endl;
        for(auto & val :pr.second ){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}