#include <bits/stdc++.h>
using namespace std;
void normal(float a)
{
    while (a > 1)
    {
        a /= 2;
    }
    cout << (a == 1 ? "yes " : "no")<<endl;
}
void bitManip(float a){ // adjusi for 0
    int b = (int)a;
    if(b == 0){
        cout <<"yes " <<endl;
        return;
    }
    if( (b & (b-1)) == 0) cout <<"yes"<<endl;
    else{
        cout <<"no" <<endl;
    }

}
int noOfOnes(int a){
    int ans =0;
    // while (a >0) // O(log n)
    // {
    //     ans += (1 & a);
    //     a = a >>1;
        
    // }
        while (a > 0)
        {
            a = (a & (a-1)); // this will clear the right most 1
            /*
                keep clearing the ones till all of them become 0
            */
            ans++;
        }
        
    return ans;
    
}
void powSet(vector<int> &a){

    int size = a.size();
    for (int i = 0; i < (1<<size); i++)
    {
        for (int j = 0; j < size; j++)
        {
            if((1<<j) & i){
                cout <<a[j]<<" ";
            }
        }
        cout <<endl;
    }
    

}

int main()
{

    float a;
    cin >> a;
    normal(a);
    bitManip(a);

    cout << noOfOnes(19)<<endl;

    vector<int> as = {1,2,3,4};
    powSet(as);
    return 0;
}