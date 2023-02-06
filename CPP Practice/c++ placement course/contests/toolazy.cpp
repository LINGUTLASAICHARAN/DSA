#include<bits/stdc++.h>

using namespace std;
/*
https://assessment.hackerearth.com/challenges/college/luv_youtube_cp_course_contest_3/problems/

*/
long max1(long a , long b){
    if(a > b) return a;
    return b;
}
long min1(long a , long b){
    if(a < b) return a;
    return b;
}

int main(){

    int n;
    cin >> n;
    long mx =-1, mn = INT_MAX;
    vector<pair<long,long>> v(n);
    set<pair<long,long>> st;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin >>a>>b;
        v[i] = {a,b};
        st.insert({a,b});
    }
    for (int i = 0; i < n; i++) // O(n2)
    {
        for (int j = i+1; j < n; j++)
        {
            pair<long,long> a = v[i] , b = v[j],c,d;
            if(a.first != b.first && a.second != b.second){

                c = {a.first , b.second};
                d = { b.first,a.second};
                if(st.find(c) != st.end() && st.find(d) != st.end()){
                        mx = max1(mx , abs((a.first - b.first)*(a.second-b.second)));
                        mn = min1(mn , abs((a.first - b.first)*(a.second-b.second)));
                }
            }
            

        }
        
    }
    cout <<(mx == -1 ? -1 : mx - mn);
    
    
}