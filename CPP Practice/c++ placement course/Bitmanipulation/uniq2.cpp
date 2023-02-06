#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v = {1,2,3,1,2,3,5,7};
    int xors = 0;
    for(auto & ele : v){ // O(n) loop
        xors = xors ^ ele;
    }
    int pos = 0;
    while (true)
    {
        if((1<<pos) & xors) break;
        pos++;
    }
    int dup = xors; // storing it to use it after extracting the other element
    for(auto &ele : v){ // O(n) loop
        if((1<<pos)& ele){
            xors = xors ^ ele;
        }
    }
    cout << xors <<" ";
    cout <<(dup ^  xors) <<endl;
    return 0;
}