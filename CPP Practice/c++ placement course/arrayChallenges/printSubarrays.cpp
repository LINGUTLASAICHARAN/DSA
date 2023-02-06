#include <bits/stdc++.h>
using namespace std;

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < size; i++)  // pick a start point
    {
        for (int j = i; j < size; j++) // pick an end point
        {
            for (int z = i; z <=j; z++) // print stuff between start and end
            {
               cout << array[z] << " ";
            }
            cout <<endl;
        }
        
    }
    
    return 0;
}