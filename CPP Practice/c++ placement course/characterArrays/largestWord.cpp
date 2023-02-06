#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    cin.ignore();

    char sent[n+2];
    cin.getline(sent,n);
    cin.ignore();

    int ans = 0 , count = 0;
    int i = 0;
    while (sent[i]!= '\0')
    {
        if(sent[i] != ' ') {
            count++;

        }
        else{
            ans = max(ans , count);
            count = 0;
        }
        i++;
    }
    cout <<ans<<endl;

    
    return 0;
}