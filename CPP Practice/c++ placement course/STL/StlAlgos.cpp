#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // max_element and min_element retun the pointers to the mx and mx elements in the vector
    cout << *min_element(v.begin()+3 , v.end())<<endl;
    cout << *max_element(v.begin() , v.end())<<endl;
    
    int initSum  = 0;
    int sum = accumulate(v.begin(),v.end(),initSum);
    cout << sum <<endl;
    int ct = count(v.begin() , v.end(),6);
    cout <<ct<<endl;
    auto elemement = find(v.begin(),v.end(),70);
    cout << (elemement == v.end()? "Not found" : "found")<<endl;
    reverse(v.begin(),v.end());
    for(auto & ele : v){
        cout << ele <<" ";
    }
    cout <<endl;
    string s= "sai chaaran";
    reverse(s.begin() , s.end());
    cout <<s << endl;
    return 0;
}