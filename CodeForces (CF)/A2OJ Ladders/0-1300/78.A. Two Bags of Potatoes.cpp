#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
   ll y,k,n,chk=1; cin >> y >> k >> n;
   
   if(y >= n) {
       cout<<-1<<"\n";
       chk=0;
   }
  else {
      ll x=0;
      if(y<k) x = k-y;
      else if(y==k) x = k;
      else {
          while(x<=y) x += k;
          
          x -= y;
      }
      for(ll i=x; i<=n-y; i += k) {
          chk=0;
          cout<<i<<" ";
      }
  }
  
  if(chk) cout<<-1<<endl;

    return 0;
}