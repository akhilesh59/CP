#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
   int n,lc=0,gc=0,ec=0; cin >> n;
   string s; cin>>s;
   string s1 = s.substr(0,n);
   string s2 = s.substr(n,2*n);

   sort(s1.begin(),s1.end());
   sort(s2.begin(),s2.end());

   for(int i=0; i<n; i++) {
       if(s1[i] < s2[i]) lc++;
       else if(s1[i] > s2[i]) gc++;
   }

   if(lc == n || gc == n) cout<<"YES\n";
   else cout<<"NO\n";

    return 0;
}