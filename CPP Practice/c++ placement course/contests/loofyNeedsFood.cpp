#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        // int ans = 0;
        int n,k;
        long long f;
        cin >> n>>k>>f;
        vector<pair<int,int> > prs;
        for (int i = 0; i < n; i++)
        {
            int dst ,foo;
            cin >>dst>>foo;
            prs.push_back({k-dst , foo});

        }
        sort(prs.begin() , prs.end());
        bool can_reach = true;
        int cur = 0;
        int ans = 0;
        multiset<int> food_avl;
        for (int i = 1; i < k; i++)
        {
            f--;
            if(i == prs[cur].first){
                
                food_avl.insert(prs[cur].second);
                cur++;

            }
            if(f == 0){
                if(food_avl.size() == 0){
                    can_reach = false;
                    break;
                }
                else{
                    ans++;
                    f = *(--food_avl.end());
                    food_avl.erase(--food_avl.end());
                }
            }

        }
        if(can_reach) cout << ans<<endl;
        else{
            cout << -1<<endl;
        }
        
    }
    




    return 0;
}