#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> data = {1,3,2,3,4,2,1,1,3,2};
    vector<int> v(64); // 
    for (int i = 0; i < 64; i++)
    {
        int nob = 0;
        for(auto & ele : data){
            if((1<<i) & ele) nob++;
        }
        v[i] = (nob%3); // if all else are present k times do nob % k
    }
    int i =1 , ans = 0;
    for(auto & e : v){
        ans+= (e)*i;
        i*=2;
   
    }
    cout << ans;

    return 0;
}

