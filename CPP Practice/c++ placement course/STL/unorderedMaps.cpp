#include<bits/stdc++.h>
using namespace std;
/*
unordered_map<datatype , datatype> 
    implemented using hash table in stl
    unordered maps dont save in sorted order so insertion takes constant order 
    valid keys
        because of int, long long , string, double , float
    data types
    insertion and access is done in average O(1)
*/

int main(){
    unordered_map<int , string> ump;
    ump[1] = "one";
    ump[4] = "four";
    ump[2] = "two";
    ump[3] = "three";
    // printing unordered_map
    // for(auto &ot : ump){

    //     cout << ot.first << " "<< ot.second <<endl;
    // }
    // find function
    // auto it = ump.find(30);
    // if(it != ump.end())
    //     cout <<it->first << " "<< it->second << endl;
    ump.erase(1);
   auto it2 =  ump.find(2);
    if(it2 != ump.end())
        ump.erase(it2);
    for(auto &ot : ump){

        cout << ot.first << " "<< ot.second <<endl;
    }
    return 0;
}