#include <bits/stdc++.h>
using namespace std;
// range based loops and auto keyword
int main(){
    vector<int> a = {1,2,3,4,4,5,5,5,6};
    vector<int> :: iterator it;
    for(it = a.begin() ; it != a.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    // range based loop is this


    for(int &val : a){ // reference is used here range_declaration : range_expression
       val*=2;
    }
        for(int val : a){
        cout <<val <<" ";
    }
    cout <<endl;
    int arr[] = { 1,2,3,4,5,6,6,7,7,8,8,8,998,76,5,4};
    cout << "printing array " << endl;
    for(int it   : arr){
        cout << it <<" ";
    }
    cout << endl;


    vector<vector<int>> dv = {{1,2,3},{4,55,6,7,8,9,101},{5,7,65543,32343,543}};


    // without auto

    for(vector<int> it : dv){ // if not using auto data type has to decaared
        for(int a : it){
            cout <<a <<" ";
        }
        cout << endl;
    }
    for(auto it : dv){ // auto automatically detects data type it : v creates a range based loop
        for(auto it2 : it){
            cout << it2 <<" ";
        }
        cout<<endl;
    }
    return 0;
}