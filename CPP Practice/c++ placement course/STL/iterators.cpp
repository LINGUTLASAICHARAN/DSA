#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v){
     cout << "size is  " << v.size()<<endl;
    for (int i = 0; i <v.size() ; i++)
    {
        cout<<v[i]<<" "<<endl;
    }
}

int main(){
    vector<int> vec(5,-2);
    vec.push_back(35);
    // printvec(vec);
    vector<int> :: iterator it = vec.begin();
    // cout << *(it+5) <<" ";
    vector<int> :: iterator itnew ;
    for(itnew = vec.begin();itnew != vec.end();itnew++){
        cout << *itnew <<" ";
    }
    cout << endl; 
    vector<pair<int,int>> vp = {{1,2},{3,4},{5,6}};
    vector<pair<int,int>> :: iterator it3;
    for(it3 = vp.begin();it3 != vp.end() ; it3++){
        cout << it3->first <<" "<<it3->second <<endl; // arrow operator

    }
    // with auto
    for(auto it = vp.begin() ; it != vp.end();it++){
        cout << it-> first <<" "<< it->second <<endl;
    }
    return 0;
}