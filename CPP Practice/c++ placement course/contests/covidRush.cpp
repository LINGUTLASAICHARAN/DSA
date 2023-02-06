#include<bits/stdc++.h>

using namespace std;

int main(){
      int n,m;
      cin >> n>>m;
      vector<int> art(n),tt(n);
      for (int i = 0; i < n; i++)
      {
        cin >>art[i];
      }
        for (int i = 0; i < n; i++)
      {
        cin >>tt[i];
      }
      vector<int> treated(m);
      vector<int> status(m); // contains day till which it is occupied


      int curPat = 0;
    for (int day = 1; curPat < n; day++)
      {
        int found =0;
        if(art[curPat] == day){
            int asn = curPat % m;
            if(status[asn] == 0 || status[asn] <= day){
                treated[asn]++;
                status[asn] = day + tt[curPat];
                curPat++;
                found =1;
            }
            else{
                for ( int i = (asn+1)%m; i != asn; i = (i+1)%m)
                {
                    if(status[i] == 0 || status[i] <= day){
                    treated[i]++;
                    status[i] = day + tt[curPat];
                    curPat++;
                    found =1;
                    break;
                    }
                    
                }
                if(found == 0){
                    curPat++;
                }
                
            }
            
        }
      }
        
      for(auto & e : treated){
        cout << e <<" ";
      }
      

    return 0 ;
}