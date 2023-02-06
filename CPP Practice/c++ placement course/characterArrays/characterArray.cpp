#include <bits/stdc++.h>
using namespace std;

int main(){
    char A[11] = "sai charan"; // always requires 1 extra space for null character
    int i  = 0;
    while (A[i] != '\0')
    {
        cout << A[i];
        i++;
    }
    cout << endl;
    cin >>A; // reading into array
    cout <<A; // printing array
    return 0;
}