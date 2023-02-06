#include<bits/stdc++.h>
using namespace std;
/*
    all of
    none of 
    any of
    returns true  if the required elements satify any condition
*/

/*
    Lambda function [](int a){return a + 2 ;}


*/

bool  is_positive(int x){
    return x > 0;
}
int main(){
    auto sum = [](int a,int b){return a+b ;}; // sum is the lambda function here
    cout << sum (3,4) <<endl;
    

    vector<int> v =  {1,2,3};
    cout << all_of(v.begin() , v.end(),
                                        [](int x){return x>0;}) <<endl;

    cout << all_of(v.begin(),v.end(),is_positive) <<endl;
    return 0;
}