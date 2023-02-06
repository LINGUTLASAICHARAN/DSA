#include<bits/stdc++.h>
using namespace std;
void far(void){
    vector<int> b;
    int i = 2;
    b[i] = 3443;

}

int main(){
    int array[] = {1,2,3,-90,-55,-45,-88};
    int n = sizeof(array)/sizeof(array[0]);

    for (int i = 1; i <= n-1; i++)
    {
       for (int j = 0; j < n-i; j++)
       {
        if(array[j] > array[j+1]) {
            swap(array[j],array[j+1]);
        }
       }
       
    }
    for(auto & ele : array){
        cout <<ele <<" ";
    }

    return 0;
}

