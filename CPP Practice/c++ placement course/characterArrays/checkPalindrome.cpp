#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin  >> n;
    char A[n+1];
    cin >> A;
    int  start =0;
    int end = n-1;
    bool flag = true;
    while (start <= end)
    {
        if(A[start] == A[end]){
            start++;
            end--;
        }
        else{
            flag = false;
            cout << "not palindrome";
            break;
        }
    }
    if(flag){
        cout << "palindrome";
    }
    
    return 0;
}