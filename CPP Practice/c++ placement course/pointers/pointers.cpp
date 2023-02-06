#include <bits/stdc++.h>
using namespace std;

int main(){
    int a =10;
    int * poi = &a;
    cout << poi << "-> "<< *poi  << endl;
    int arr []= {1,2,3};
    cout << *arr<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr+i) <<" ";
        // arr++; this is illegal as arr is const pointer
        
    }
    int * ptr = arr;  // since increasing arr is illegal take reference
    cout << endl;
    for (int i = 0; i <3; i++)
    {
     cout << *(ptr) <<" ";   
     ptr++;
    }
    
    return 0;
}