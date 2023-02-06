#include <bits/stdc++.h>
using namespace std;
class Check{
    public:
    int a = 10;
};
vector<int> func(void){
     vector<int> a = {1 , 2 ,3,4 };
     return a;
}
int main(){
    
    vector<int> Check = func();
    func();
    cout << Check.size();
  

    return 0;
}