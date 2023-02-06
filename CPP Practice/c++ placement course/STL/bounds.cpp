#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >>ar[i];
    }
    sort(ar.begin() , ar.end());
    for(auto ele : ar){
        cout << ele<<" ";
    }
    cout <<endl;
    // lower bound of an element is that  is greater than or equal to 
    // upperboud of an element is anything that is strictly grater
    // lb(x) is y | y >= x | y is in the array
    // ub(x) is y | y > x | y is in the array
    //for finding bounds the array has to be sorted so binary search can be used to solved in log(n) time  
    auto ptr = lower_bound(ar.begin() , ar.end() , 6); // 7
    cout << *ptr;
    ptr = lower_bound(ar.begin(), ar.end() , 9); //25
    cout <<endl<<*ptr;
    ptr = upper_bound(ar.begin(), ar.end() , 5);//7
    cout <<endl << *ptr;
    ptr = upper_bound(ar.begin() , ar.end() , 24); //25
    cout <<endl <<*ptr;

    //  for maps and sets the above way of using bounds will work in O(n)
    // because it is rb tree it takes O(n) if done like above
    set<int> st;
    for (int i = 0; i < (int)1e6; i++)
    {
        st.insert(rand());
    }
    for (int i = 0; i < (int)1e6; i++)
    {
        // auto it = upper_bound(st.begin(),st.end(),rand()); // runs in O(n)
        auto it = st.upper_bound(rand());  // this will run in O(n)
    }
    
    return 0;
}