#include<bits/stdc++.h>
using namespace std;
/*

ordered sets
unordered sets 
multi sets 

just like maps without values but only keys meaning unique
*/

int main(){
    set<string> st;
    st.insert("abc"); // log(n)
    st.insert("Zsdf");
    st.insert("bcd");
    st.insert("Aaddovn"); // capital alphabets are lower in the ascending order
    // auto it = st.find("WEFWED");
    // if(it != st.end()){
    //         cout << (*it)<<endl;
    // }
    // else{
    //     cout << "not in set" <<endl;
    // }
    // st.erase(it);

    for(auto & str : st ){ // range based loop

        cout << str << endl;
    }

    // question 
    cout << "--question--" <<endl;
    int n;
    cin >> n;
    set<string> st2;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st2.insert(s);
    }
    for(auto &str : st2){

        cout << str <<endl;
    }
    
    return 0;
}