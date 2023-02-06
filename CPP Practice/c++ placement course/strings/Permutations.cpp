#include<bits/stdc++.h>
using namespace std;


void perm(string x, string ans){
    if(x== ""){
        cout <<ans <<endl;
        return ;
    }
    for (int i = 0; i < x.size(); i++) // any character can take next spot
    {
        char t= x[i];
        string ros = x.substr(0,i)+x.substr(i+1); // removing element at index i
        perm(ros,ans+t);
    }
    
}
int main()
{
    string x = "ABC";
    perm(x,"");
    string a = "012345";
    
 return 0;
}