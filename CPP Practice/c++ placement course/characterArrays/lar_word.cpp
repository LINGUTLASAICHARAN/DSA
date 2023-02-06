#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr , n);
    cin.ignore();

    int i = 0;
    int len = 0 , mxlen = 0;
    int st = 0 , mxst = 0;
    while(1){
        if(arr[i] == ' ' || arr[i]=='\0'){

            if(len > mxlen){
                mxlen = len;
                mxst = st; // star of the previous word because it is currently largest
            }
             len = 0;
             st = i+1; // start of the next word

        }
        else{
            len++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout << mxlen<<endl;
    for (int i = 0; i < mxlen; i++)
    {
        cout << arr[i+mxst];
    }
    
    return 0;
}