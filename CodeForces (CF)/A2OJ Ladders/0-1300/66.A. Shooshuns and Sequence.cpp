#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,diff=0; cin>>n>>k;
    vector<int> v(n);   for(auto& i : v) cin>>i;
    vector<int> idcs(1);

    if(n==1) {
        cout<<0<<"\n";
        return 0;
    }
    if(k == 1 && v[0] != v[1]) {
        cout<<-1<<"\n";
        return 0;
    }

    for(int i=1; i<n; i++) {
        if(v[i] != v[i-1]) {
            idcs.push_back(i);
        }
       if(i >= k) {
           if(v[i] != v[i-1]) {
                cout<<-1<<"\n";
                return 0;
           }
       }
    }
    
    int maxi = *max_element(idcs.begin(), idcs.end());

    cout<<maxi<<"\n";

    return 0;
}