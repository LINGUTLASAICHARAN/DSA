#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    int a[] = {1,2,3,4,5};
    for (int i = 0; i < 4; i++) // a sub array can start at these i
    {
        for (int j = i; j < 4; j++) //a sub array can end at these respective locations
        {
           for (int  k = i; k <= j; k++) // summing up elements for each SA starting at i and ennding at j
           {
             sum += a[k];
           }
           
        }
        
    }



    int temp = 0 , result = 0;
    cout << "printing all the sub array sums" << endl;
    for (int i = 0; i < 4; i++)
    {
        temp = 0;  // using this variable we can store the sum of previous sub array starting at same i
        for (int j = i; j < 4; j++)
        {
            temp += a[j];
            cout << temp << "  ";
            result += temp;
        }
        cout << endl;
    }
    
    cout <<"result in O(n^3) " <<sum << endl ;
    cout <<"result in O(n^2) "  << result << endl;
    return 0;
}