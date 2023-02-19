#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    map<char,int> mp = {{'(',1},{')',-1},{'[',2},{']',-2},{'{',3},{'}',-3}};
    stack<char> stk;
    bool flag = true;
    for(auto & ch : s ){
        if(mp[ch] > 0){
             stk.push(ch);
            //  cout <<"pushing  " <<ch <<endl;
        }
        else{
            if(stk.empty() || (mp[stk.top()] + mp[ch] ) != 0) {
                // cout << "breaking here "<<endl;
                flag = false;
                break;
            }
            else{
                // cout << "popping  " << stk.top() <<endl;
                stk.pop();
            }
        }
    }
    if(!stk.empty() || !flag) cout << "not balanced"<<endl;
    else{
        cout << "balanced" <<endl;
    }
 return 0;
}