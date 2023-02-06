#include<bits/stdc++.h>
using namespace std;
void isBalanced(string & s){
    stack<char> sk;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '('||s[i]=='{'||s[i]=='['){
            sk.push(s[i]);
        }
        else{
            if(sk.top()== '(' && s[i] == ')'){
                sk.pop();
            }
           else if(sk.top() == '{' && s[i] == '}' ){
                sk.pop();
            }
            else if (sk.top() == '[' && s[i] == ']' ){
                sk.pop();
            }
            else{
                break;

            }
        }
    }
    if(sk.empty()){
        cout <<"YES" <<endl;
    }
    else{
        cout <<"NO" <<endl;
    }
}
string isBalOptim(string &s){
    unordered_map<char,int> mp = {{'(' , -1} , {'[',-2},{'{',-3},{')',1},{']',2},{'}',3}};
    stack<char> sk;
    for(auto & ch : s){
        if(mp[ch] < 0){
            sk.push(ch);
        }
        else{
            if(sk.empty() || (mp[ch] + mp[sk.top()]) != 0) {
                return "NO";
            }
            sk.pop();
        }
    }
    if(sk.empty()){
        return "YES";
    }
    return "NO"; 
}

int main(){
    //-------que1 balanced paranthesis

    string s;
    cin >>s;
    cout << isBalOptim(s);
    return 0;
}