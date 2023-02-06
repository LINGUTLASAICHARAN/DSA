#include <bits/stdc++.h>
using namespace std;

int main(){
    int array[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9};
    int size = sizeof(array)/sizeof(array[0]);


    // BRUTE FORCE
    int maxSum = INT_MIN;
    for (int i = 0; i < size; i++)  // pick a start point
    {
        for (int j = i; j < size; j++) // pick an end point
        {
            int sum = 0;
            for (int z = i; z <=j; z++) // add stuff between start and end
            {
               sum+= array[z];
            }
            maxSum = max(maxSum , sum);
        }
        
    }
    cout << maxSum<<endl;
    //OPTIMISED APPROACH O(n2)
    int mx = INT_MIN;
    for (int i = 0; i < size; i++) // using cumulative sum
    {
        int sum = 0;
        for(int j = i ; j < size ; j++){
            sum+= array[j];
            mx = max(mx , sum);
        }
        

    }
    cout << mx<<endl;
    int m = INT_MIN , curSUm = 0;
    for (int i = 0; i < size; i++) // kdanes algo . Does not work when array contains only -ve numbers
    {
        curSUm += array[i];
        if(curSUm < 0) curSUm = 0; 
        m = max(m, curSUm);
    }
    cout <<m;
    return 0;
}