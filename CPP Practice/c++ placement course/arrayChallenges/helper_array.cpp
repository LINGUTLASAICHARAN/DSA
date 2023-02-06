#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sol = size + 1;
    bool help[sol] ;
    for (int i = 1; i <= size; i++)
    {
        help[i] = 0;
    }
    
    for (int i = 0; i < size; i++)
    {
       if(arr[i] >=1 && arr[i <= size]){
        help[arr[i]] = 1;
       }
    }
    for (int i = 1; i <= size; i++)
    {
       if(!help[i]){
        cout << i <<endl;
        return 0;
       }
    }
    cout << help[1];
    return 0;
}