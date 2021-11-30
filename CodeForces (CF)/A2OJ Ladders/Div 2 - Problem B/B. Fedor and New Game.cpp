#include <iostream>
#include<vector>

using namespace std;

int main()
{
   int n,m,k; cin>>n>>m>>k;
   vector<int> v(m+1);
   int ans = 0;
   
   for(auto &i : v) cin >> i;
   
   int f = v[m];
   
   for(int i=0; i<m; i++) {
       int x = f^v[i];
       int cnt = 0;
       while(x) {
           x = x&(x-1);
           cnt++;
       }
       
       if(cnt<=k) ans++;
   }
   
   cout<<ans<<"\n";
   
   return 0;
}