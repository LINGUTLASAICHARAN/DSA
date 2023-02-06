#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "sai charan";
    cout << s;
    s.append("aef");
    s.push_back('n'); // takes character
    cout << endl<<s;
    string str1(5,'n');
    cout << endl<<str1<<endl;
    // string str2;
    // getline(cin , str2); // to get with spaces
    // cout << str2;

    string a = "fam" , b = "ily";
    cout << endl << a+b; // adding strings
    cout << "length of a" <<a.length();
    a.clear() ; // remove stuff in a
    cout << endl<<"length of a after clear " <<a.length();
    cout << endl << a.compare(a); // 0 is equal

    string name = "qerfwfqweef";
    name.erase(1,1);  //start form 1 remove 1 and adjust everythimg
    cout <<endl << name;


    string s1 = "123";
    int x = stoi(s1); // string to integer
    cout <<endl <<  x+1 << endl;
    str1 = to_string(x);
    cout << str1+"1"; //  got str 
    string ab = "qefqefqgaergabcdef";
    sort(ab.begin() , ab.end());
    cout << endl << ab;
    return 0;
}