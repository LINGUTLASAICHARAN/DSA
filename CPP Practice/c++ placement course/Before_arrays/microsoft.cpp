#include <bits/stdc++.h>
using namespace std;
int solution(string &s)
{

    set<char> st;
    int ans = 1;
    for (int i = 0; (unsigned)i < s.size(); i++)
    {
        if (st.find(s[i]) == st.end())
        {
            st.insert(s[i]);
        }
        else
        {
            ans++;
            st.clear();
            st.insert(s[i]);
        }
    }
    return ans;
}
int solution(vector<int> &arr, int k)
{

    int n = arr.size();
    int result = 0, curSum = 0;
    unordered_map<int, int> mp; // map has key value pairs
    for (int i = 0; i < n; i++)
    {
        curSum += (arr[i] - k);
        if (curSum == 0)
            result++;
        if (mp.find(curSum) != mp.end())
            result += mp[curSum];

        mp[curSum]++;
    }

    return result;
}

int main()
{
    string S = "sai";
    return 0;
}