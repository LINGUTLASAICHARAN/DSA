#include <bits/stdc++.h>
using namespace std;
int kadane(int array[], int size)
{
    int cursum = 0, maxsum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        cursum += array[i];
        if (cursum < 0)
        {
            cursum = 0;
        }
        maxsum = max(maxsum, cursum);
    }
    return maxsum;
}
int main()
{
    int array[] = {4,4,6,-6,10,-11,12};
    int size = sizeof(array) / sizeof(array[0]);
    int nonwrap = kadane(array, size);   // normal if no wrapping
    cout << "nonwrap solution : "<< nonwrap <<endl;
    int totalsum = 0;
/*
assuming circular array solution can be wrap or non wrap
when solution is wrap the non-contributing elements are in nonwrap subarray
if you reverse the sign of array then the solution becomes non wrap and find the solution
TOTALSUM = CONTRIBUTING + NONCONTRIBUTING
CONTRIBUTING = TOTAL - NONCONTRIBUTING
reverse the sign of non contributing because the sign has been reversed previously

*/
    for (int i = 0; i < size; i++) 
    {
        totalsum += array[i];
        array[i] = -array[i];
    }
    /*
    after reversing the sign the maxsub array will be the -ve of min sub array which is the -ve of 
    non contributing elements
    */
    int wrap = totalsum - (-kadane(array, size));  // 
    cout << max(wrap, nonwrap);
    return 0;
}