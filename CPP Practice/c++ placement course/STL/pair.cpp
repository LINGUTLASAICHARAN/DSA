#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1,5576,9} ;
    // cout << a[1];
    pair<int , string> p;
    p = make_pair(2,"ajwcnke");
    pair<int , string> &q = p;

    q.first = 95959;
    cout << p.first <<" "<< p.second<<endl;

    pair<string , string> navil;
    navil = {"sai" , "vtp"};
    cout << navil.first<<endl;
    int arr1[] = {1,2,3};
    int arr2 []= {4,5,6};
    pair<int , int > p_array[] = {{1,4},{2,5},{3,6}};
    for (int i = 0; i < 3; i++)
    {
        p_array[i] = make_pair(arr1[i],arr2[i]);
    }
    swap(p_array[0],p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " "<<p_array[i].second<<endl;
    }
    
    return 0;
}