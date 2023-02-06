#include <bits/stdc++.h>
using namespace std;
void printMap (map<int , string> mp1){
    cout << mp1.size()<< endl;
        for(auto & it:mp1 ){ // range based loop
        cout <<it.first << " " <<it.second <<endl;

    }
}
int main(){
    // sets is normal set with dpes not allow duplicates
    // maps is a set of pairs ig
    map<string , int> mp = {{"Saicharn ",2} , {"santosh",3}};
    // cout << mp["Saicharn "];
    mp["dinesh"] = 89252;
    for(auto it : mp){
        cout << it.first <<" ";
    }
    cout <<endl;
    map<int ,string> mp1;
    mp1[1] = "sai";
    mp1[2] = "dinesh";
    mp1[3] = "santu";
    mp1.insert({4,"chai"});
    // map<int , string> :: iterator it;
    // for(it = mp1.begin(); it != mp1.end();it++){// using iterators
    //     cout << it->first <<" "<< it->second << endl;
    // }
    cout << mp1[4]+"ygjh"<<endl;
    map<string,int> mmp;
    mmp["one"] = 1;
    cout << ++mmp["one"]<<endl;
    pair<int,int> am= {1,2};
    cout <<(am.first )<<endl ;
    am = make_pair(3,4);
    cout <<( mmp.find("one") != mmp.end())  ;
    return 0;
}