#include <bits/stdc++.h>
using namespace std;
bool pairSum(int array[] , int size , int k){
    //brute force looking for all possible pairs and checking for the sum

    //O(n^2)
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(array[i] + array[j]  == k){
                cout <<i<<" "<<j <<endl;
                return true;
            }
        }
        
    }
    return false;
    
}
bool pairSum1(int array[] , int size , int k){  // given the array is in sorted order
    // two pointer method one at start and on at the end because sorted arrays
    int lo = 0 , hi = size -1;
    while(lo <hi){
        if(array[lo] + array[hi] == k){
            cout << lo << " " << hi <<endl;
            return true;
        }
        else if(array[lo] + array[hi] < k){
           lo++;
           
        }
        else{
            hi--;
        }
    }
    return false;
}


int main(){
    int array[] = {2,4,7,11,14,16,20,21};
    int k = 31;
    int size = sizeof(array) / sizeof(array[0]);
    cout <<pairSum1(array , size , k);
    return 0;
}