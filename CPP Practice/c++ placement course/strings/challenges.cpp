#include <bits/stdc++.h>
using namespace std;
string low2up(string a){
     // 'a' - 'A' = 32
    for (int i = 0; i <a.size(); i++)
    {
        if(a[i] >= 'a' && a[i] <='z'){
            a[i] -=32;
        }
    }
    return a;
}
string up2lo(string a){
     // 'a' - 'A' = 32
    for (int i = 0; i <a.size(); i++)
    {
        if(a[i] >= 'A' && a[i] <='Z'){
            a[i] +=32;
        }
    }
    return a;
}
void maxRep(string s){
    int freq[26]; // assuming only small case 
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    int maxfreq = 0 ; 
    char max; 
    for (int i = 0; i < s.size(); i++)
    {
        char a= s[i];
        freq[a - 'a']++;//a is mapped to index  0
        if(freq[a - 'a'] > maxfreq){
            max = a;
            maxfreq = freq[a-'a'];
        }
    }
    // or after building the freq array
    // int mxfreq = 0 ;
    // char mx = 'a'; // mapping the index i to char 'a'+i
    // for (int i = 0; i < 26; i++)
    // {
    //     if(freq[i] > mxfreq){
    //         mxfreq = freq[i];
    //         mx = i +'a';

    //     }
        
    // }
     // cout << mx <<" " << mxfreq;
    cout << max << " " << maxfreq << endl;


}
int main(){

   
    string inp = "erwfsgngDbTYGUIHOe";
    cout << low2up(inp)<<endl;
    cout << up2lo(inp) <<endl;
    transform(inp.begin() , inp.end(),inp.begin(),::toupper);
    cout << inp << endl;
    string b = "jbsdkjfhkKJDHAWDllisdlih";
     transform(b.begin() , b.end(),b.begin(),::tolower);
     cout << b <<endl;
    string str = "123945";
    sort(str.begin() , str.end());
    cout << str<< endl;
    sort(str.begin() , str.end(),greater<char>());
    cout << str << endl;
    maxRep("jyfulgkyufuyuuubzzzzzzzzzawesrtfibacuuga");
    return 0;
    cout << ('a'< 'b');
}