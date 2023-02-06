#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        int a,b;
        cin >>a;
        multiset<int> st;
        while (a--)
        {
            int t;
            cin >>t;
            st.insert(t);
        }
        cin >>b;
        vector<int> v;
        while (b--)
        {
            int t;
            cin >>t;
            auto it = st.find(t);
            while (it != st.end())
            {
                v.push_back(t);
                st.erase(it);
                it = st.find(t);
            }
            

        }
        for(auto & ele : st){
            v.push_back(ele);
        }
        for(auto &it : v){
            cout <<it<<" ";
        }
        cout <<endl;


    }
    


    return 0;
}

