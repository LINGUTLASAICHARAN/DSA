#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int maxim = INTMAX_MIN , minim = INT_MAX; // INITIALLISING WITH MAXIMUN VALUE IN MINIMUM AND MINIMUM VALUE IN MAX
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // maxim = minim = array[0];

    for (int i = 1; i < n; i++)
    {
        maxim = max(maxim , array[i]);
        minim = min(minim , array[i]);
    }
    cout << "max : " << maxim << " minim : " << minim ;
    
    return 0;
}