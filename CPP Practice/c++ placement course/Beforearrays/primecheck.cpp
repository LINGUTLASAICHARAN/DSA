#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;;
    bool flag = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n %i == 0) {
            cout << "not prime";
            flag = true;
            break;
        }
    }
    if(flag == false) cout << "prime";
    return 0;
}