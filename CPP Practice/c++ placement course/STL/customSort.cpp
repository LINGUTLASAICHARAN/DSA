#include<bits/stdc++.h>

using namespace std;

bool compFunct(pair<int,int> &p1,pair<int,int> &p2){
    // if(p1.first != p2.first)
    //     if(p1.first > p2.first) return false; // false implies swap
    // else{
    //     if(p1.second < p2.second) return false;
    //     return true; // true implies no swap
    // }

    // exact same easy to write
    if(p1.first != p2.first){
        return p1.first < p2.first; // return what wwhat you wnat
    }
    else{
        return p1.second > p2.second; // return what you want
    }
    
}

bool comint(int a , int b ){
    return a> b; // for descendig order behaviour
}

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);

    for (int i = 0; i < n; i++)
    {
       
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end()); // normla sort
    sort(v.begin() , v.end(),compFunct); // sort with custon funct for custom
    for(auto & p: v){

        cout << p.first <<" "<< p.second <<endl;
    }


    return 0;
}