#include<bits/stdc++.h>

using namespace std;

/*
    link
    https://assessment.hackerearth.com/challenges/college/luv_youtube_cp_course_contest_3/problems/

    solve in O(nq) or O(nq * log(n)) nq = number of quries n = number of elements in array
*/

int main(){
    int n,m;
    cin >>n >>m;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]  %= m;   
    }
    sort(v.begin() , v.end());
    int nq;
    cin >> nq;
    for (int i = 0; i < nq; i++) // O(nq)
    {
        long long q;
        long long mx = -1;
        cin >> q;
        q %= m;
        auto it = upper_bound(v.begin(),v.end(),m-q-1); // this is log(n) function
        if(it != v.end()){
            it--;
        } 
        mx = max((v[n-1] + q) % m , ((*it) + q)%m);
        cout << mx <<endl;
    }
    
    

    return 0;
}