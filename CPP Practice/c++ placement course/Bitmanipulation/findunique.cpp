#include<bits/stdc++.h>

using namespace std;
/*
    using map
*/

int main_normal(){
    vector<int> v = {2,4,6,3,4,6,2}; // 3 is uniq
    /*
        use XOR
            a.b_bar + a_bar.b
    */
    map<int ,int> a; // key , frequency
    for(auto & ele : v){ // n
        a[ele]++; // log(n) inserting into map
    }  
    for(auto &ele : a){
        if(ele.second !=2) { 
            cout << ele.first <<endl;
            break;
        }
    }
}

int  main(){
     vector<int> v = {2,4,6,3,4,6,2}; // 3 is uniq
    /*
        use XOR
        a.b_bar + a_bar.b
        both same means 0
        xor with 1 to flip the bit
        
    */
    int xorsum = 0 ;
    for (auto & ele : v)
    {
        xorsum = xorsum ^ ele;
    }
    // here assosciativity and commu*ty are being used 
    cout << xorsum;
    return 0;
}