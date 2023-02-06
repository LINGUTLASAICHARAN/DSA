#include <bits/stdc++.h>
using namespace std;
void printMap (map<int , string> mp1){
    cout << mp1.size()<< endl;
        for(auto & it:mp1 ){ // range based loop using referenced variables here saves copying time
        cout <<it.first << " " <<it.second <<endl;

    }
}

/*
           Maps
            insetion, erase function , find function , clear
            implemented using red blak tree any operation takes O(log n) time
            the time complexity of operations when key is a string will be diff i.e O(log n * size of string)
            implemented using red black trees 


*/
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
    mp1[1] = "sai"; // inserting into map takes O(logn) time
    mp1[2] = "dinesh";
    mp1[3] = "santu";
    mp1.insert({4,"chai"});
    mp1[5]; // this inserts {5,NULL} int the map    
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
    cout <<( mmp.find("one") != mmp.end()) <<endl ;
    cout <<"map size " << mmp.size() <<endl;

    map<int,string> ism = {{1,"one"} , {2,"two"},{3,"three"}};
    int i  = 3;
    auto it  = ism.find(i);
    if(it == ism.end())
        cout << i << " does noe exist in map" <<endl;
    else{
        // cout<< (*it).second <<endl;
        cout <<it->second <<endl;
    }
    ism.erase(10) ;// erasing with key does not give segmentation fault
    auto it2 = ism.find(20);
    if(it2 != ism.end() ) // erasing with iterator can produce seg fault hence check nefore erasing
        ism.erase(it2);
    // ism.clear() ; //empties the map
    cout <<"prninting map";
    printMap(ism);
    return 0;
}
