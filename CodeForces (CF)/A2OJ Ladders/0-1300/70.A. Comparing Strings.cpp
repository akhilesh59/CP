#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s1,s2; 
   getline(cin,s1);
   getline(cin,s2);

   int a1[26] = {0};
   int a2[26] = {0};

   if(s1.length() != s2.length()) {
        cout<<"NO\n";
        return 0;    
   }
   for(int i=0; i<s1.length(); i++) {
       int ind = s1[i] - 'a';
       a1[ind]++;
   }
   for(int i=0; i<s2.length(); i++) {
       int ind = s2[i] - 'a';
       a2[ind]++;
   }

   int cnt = 0;

   for(int i=0; i<s1.length(); i++) {
       if(s1[i] != s2[i]) cnt++;
   }

   if(cnt>2) {
       cout<<"NO\n";
       return 0;
   }
   
   else {
       for(int i=0; i<26; i++) {
            if(a1[i] != a2[i]) {
                cout<<"NO\n";
                return 0;
            }
        }
   }

   cout<<"YES\n";
   
   return 0;
}