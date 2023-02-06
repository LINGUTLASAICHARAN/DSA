
#include<bits/stdc++.h>

using namespace std;
using std::vector;
void printvec(const vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
           cout<<v[i] <<" ";
        /* code */
    }
    cout<<endl;
    
}
int main(){
    int a[ ] = {1,2,333,4,111,6,555,80,9,10};
    vector<int> myvec(a , a+10);
    myvec.pop_back();
    printvec(myvec);
    cout<<myvec.front()<<" "<<myvec.back()<<endl;
    sort(myvec.begin() , myvec.begin() + 10);
    printvec(myvec);
   
    return 0;
}