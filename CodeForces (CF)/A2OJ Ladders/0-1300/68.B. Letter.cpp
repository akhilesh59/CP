#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s1,s2; 
   getline(cin,s1);
   getline(cin,s2);
   unordered_map<char,int> mp;
   
   for(int i=0; i<s1.length(); i++) mp[s1[i]]++;
   
   for(int i=0; i<s2.length(); i++) {
       if(s2[i] != ' ') {
           if(mp[s2[i]] == 0) {
           cout<<"NO"<<"\n";
           return 0;
           
           }
           else {
               mp[s2[i]]--;
           }
       }
   }
   
   cout<<"YES\n";
   
   return 0;
}