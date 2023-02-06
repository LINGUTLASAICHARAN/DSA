#include <bits/stdc++.h>

using namespace std;
// Next Greatest Element
vector<int> nge(vector<int> &a) // O(n2) brute force
{
    // cout << " entered function";
    vector<int> b;
    for (int i = 0; i < a.size(); i++)
    {
        int c = b.size();
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[j] > a[i])
            {
                b.push_back(a[j]);
                break;
            }
        }
        if (b.size() == c)
            b.push_back(-1);
    }
    return b;
}

vector<int> ngeStack(vector<int> & a){ // O(n)
/*
iterate over the vector 
if the curernt element can be an nge of the element at the index on stack top make it the nge of them and pop them and push the current element
if the stack is empty then nothing to check simply push the curremt element
after this is done for all the indices in the stack there is no nge so make it -1
*/
    vector<int> b(a.size());
    stack<int> stk;
    // stk.push(0);
    for (int i = 0; i < a.size() ; i++)
    {
        while (!stk.empty() && a[i] > a[stk.top()]  )
        {
            b[stk.top()] = a[i];
            stk.pop();
        }
        stk.push(i);
        
    }
    while (!stk.empty())
    {
        b[stk.top()] = -1;
        stk.pop();
    }
    return b;

}

int main()
{
    int n;
    cin >> n;
    vector<int> a ,b;
    while (n--)
    {
        int c;
        cin >> c;
        a.push_back(c);
    }
    b = ngeStack(a);
    for (auto & el : b)
    {
        cout << el << " ";
    }
    
}