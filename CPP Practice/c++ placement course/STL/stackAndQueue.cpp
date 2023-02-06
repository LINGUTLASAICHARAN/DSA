#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int> sk;
    sk.push(10);
    sk.push(120);
    // cout << sk.empty() <<' ';
    
    queue<pair<int ,string>> a;
    a.push({1,"sai"});
    cout <<a.front().first<<" " << a.front().second <<endl;
    stack<string> s;
    s.push("asdasd");
    s.push("two");
    s.push("three");
    s.push("four");
    while (!s.empty())
    {
        cout <<s.top() <<" ";
        s.pop();
    }
    cout <<endl;


    //--------queue
    queue<string> a1;
    a1.push("one");
    a1.push("two");
    a1.push("three");
    while (!a1.empty())
    {
        cout <<a1.front() <<" ";
        a1.pop();

    }
    cout <<endl;

    return 0;
} 