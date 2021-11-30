#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,mini = INT_MAX,ans=0; cin >> n;
    unordered_map<long long,int> ump;

    for(long long i=0; i<n; i++) {
        long long x; cin >> x;
        
        if(mini > x) {
            mini = x;
            ans = i+1;
        }
        ump[x]++;
    } 
    
    if(ump[mini] > 1) {
        cout<<"Still Rozdil"<<"\n";
        return 0;
    }

    cout<<ans<<"\n";
    

    return 0;
}