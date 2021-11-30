#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,chk = 1; cin >> n;
   vector<int> v(n); 
   unordered_map<int,int> mp;
   
   for(auto& i : v) {
       cin >> i;
       if(i == 5 || i == 7) {
           cout<<-1<<"\n";
           return 0;
       }
       else mp[i]++;
   }
   
   int fact = n/3;
   int x1=0,x2=0,x3=0;
   
   for(int i=0; i<fact; i++) {
          if(mp[1] > 0 && mp[2] > 0 && mp[4] > 0) {
              x1++;
              mp[1]--; mp[2]--; mp[4]--;
          }
          else if(mp[1] > 0 && mp[2] > 0 && mp[6] > 0) {
              x2++;
              mp[1]--; mp[2]--; mp[6]--;
          }
          else if(mp[1] > 0 && mp[3] > 0 && mp[6] > 0) {
              x3++;
              mp[1]--; mp[3]--; mp[6]--;
          }
          else chk = 0;
     }
   
    if(!chk) cout<<-1<<"\n";
    else {
        for(int i=0; i<x1; i++) cout<<"1 2 4\n";
        for(int i=0; i<x2; i++) cout<<"1 2 6\n";
        for(int i=0; i<x3; i++) cout<<"1 3 6\n";
    }
   
   return 0;
}