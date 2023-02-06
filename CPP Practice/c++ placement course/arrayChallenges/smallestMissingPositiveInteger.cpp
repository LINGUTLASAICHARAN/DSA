#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sol = size + 1;
    bool help[sol] ;
/*
help array is mapping between the 1 based index of a position and the truth related to the integer position
May be a map can be used with key as the positive integer itself
*/
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
    cout << "no sol in array "<<sol;
    return 0;
}