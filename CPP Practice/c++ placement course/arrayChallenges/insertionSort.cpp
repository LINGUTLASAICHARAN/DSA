#include <bits/stdc++.h>
using namespace std;

int main(){
    int array[] = {1,2,-5,11,10,5,0};
    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 1; i < size ;i++){
        int temp = array[i];
        int j = i -1;
        while(array[j] > temp && j>=0){
            // array[j+1] = array[j];
            swap(array[j+1] , array[j]); // instead of swapping moving up can be used and finally insertion can be done 
            j--;
        }
        // array[j+1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
       cout <<array[i] << " ";
    }
    
    return 0;
}