#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int start = 0 , count = 1; // minimum fragments in 1 when there is no repetition and start is used to keep track of the starting of new fragment
    for (int i = 1; i < s.length(); i++){
        for (int j = i-1; j>= start; j--)
        {
            if(s[i] == s[j]){
                start = i;
                count++;
                break;
            }
        }
        
    }
    cout << count;
    return 0;
}