#include<bits/stdc++.h>

using namespace std;
int main(){
    map<int ,multiset<string>> mp;
    int n ;
    cin >> n;
    while(n--){
        string s;
        int mark;
        cin >> s>> mark;
        mp[(-1* mark)].insert(s);
        // entering -ve values into the map canges the saving order to descending order
        // while printing just print the -ve value of it
    }
    // prints in ascedning order
    // change to -ve marks to get the ascending order
    for(auto & entr : mp){ 
        for(auto &name : entr.second){
            cout << name<<" "<< -1 * entr.first <<endl; 
        }
    }
    // with iterators as the range based loop iterates in ascending order it inserted normally
    // for(auto it = --mp.end() ; ;it--){
    //    for(auto &  nam : it->second){
    //     cout << nam << " "  << it->first <<endl;
        
    //    }
    //    if(it == mp.begin()) break;
    // }
    return 0;
}