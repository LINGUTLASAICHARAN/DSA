#include<bits/stdc++.h>

using namespace std;
int dist(vector<int> &a){
    int count = 1; // first element already counted as there is nothing behind it to check if it is already counted
    for (int i = 1; i < a.size(); i++)
    {
        int j;
        for ( j = 0; j <i; j++)
        {
            if(a[i] == a[j]){
                break; // if already existing behind it is already counted so break to check if the index is same
            }
        }
        if( i == j) count++; 
        
    }
    return count;
    
}
int distsorted(int a[]){
    int count = 0;
    for (int i = 0; i < 9 ; i++)
    {
        while(i < 8 && a[i]==a[i+1]){ // skipping the whole consequtive repeating numbers
            i++;
        }
        count++; // counting once for one iteration 
    }
    return count;
    
}

int main(){
    vector<int> arr = { 11 , 2, 3 , 4 , 1 ,3 , 4 , 2}; 
    int array[] ={ 10 , 10 , 30 , 30 , 30 , 30 , 31 , 32 , 33};
    // cout << array[0] << endl;
    cout << distsorted(array);
    return 0;
}