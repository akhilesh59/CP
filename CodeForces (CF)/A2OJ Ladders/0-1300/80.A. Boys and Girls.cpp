#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

   int n,m; cin >> n >> m;
   string s = "";

   if(n>=m) {
       while(n>0) {
           s += 'B';
           n--;
           if(m>0) {
               s += 'G';
               m--;
           }

       }
   }
   else {
       while(m>0) {
           s += 'G';
           m--;
           if(n>0) {
               s += 'B';
               n--;
           }

       }
   }

   cout<<s<<endl;

    return 0;
}