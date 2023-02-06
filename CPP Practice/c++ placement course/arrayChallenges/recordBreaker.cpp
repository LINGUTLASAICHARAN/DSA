#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // brut force approach can be done in O(n2)
    if (n == 1)
    {
        cout << "only one";
    }
    else
    {
        int count = 0, mx = INT_MIN;
        for(int i = 0 ; i<n-1 ; i++){
            if( array[i] > mx && array[i] > array[i+1]){
                count++;
                cout << array[i] <<" ";
                mx = array[i];
            }
        }
        if(array[n-1] > mx){
            count++;
            cout << array[n-1] <<" ";
        }
        cout << endl << count <<endl;
    }
    
    return 0;
} 