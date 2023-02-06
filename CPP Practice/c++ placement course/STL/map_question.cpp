#include<bits/stdc++.h>
using namespace std;
/*
    given n strings print unique strings in lexico graphic order with thier frequency
    N <= 10^5 
    |S| <= 100  
    with out maps finding unique elements would be difficut forget finding lexicographic order and their frequency
*/
int main (){
    int  n ;
    cin >>n;
    map<string , int> mp;
    for (int i = 0 ; i< n ; i++)
    {
        string a;
        cin >> a;
        mp[a] ++;
    }
    for(auto &it : mp){
        cout << it.first <<" "<< it.second << endl;
    }
    



    return 0;
}