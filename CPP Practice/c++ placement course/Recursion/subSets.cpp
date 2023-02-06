#include <bits/stdc++.h>
using namespace std;
void getPowerSet(vector<int> &a , int N , int idx , vector<int>set , vector<vector<int>>&powerSet){
    if(idx >= N){
        powerSet.push_back(set);//no more decision making  add the given sub set
        return;
    }
    else{// branch at each decision making creating two paths
        
        set.push_back(a[idx]);
        // changing the order changes the order of subsets in the power set
        getPowerSet( a ,  N ,  idx + 1 , set , powerSet) ;//picking element at idx 
        set.pop_back();
        getPowerSet( a ,  N ,  idx + 1 , set , powerSet) ;// not picking element at i
    }


};
void print(vector<vector<int>> &powerSet){
    cout << "no of subsets = "<<powerSet.size() << endl;
    for (int i = 0; i < powerSet.size(); i++)
    {
        for (int j = 0; j < powerSet[i].size(); j++)
        {
            cout << powerSet[i][j]<<" ";
        }
        cout << endl;
    }
    

}

int main(){
    vector<int> myset = {1,2,3};
    vector<vector<int>> powerSet;
    vector<int> subset;
    int si = 0;
    getPowerSet(myset , myset.size(),si , subset,powerSet);
    print(powerSet);
    return 0;
}





