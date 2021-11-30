#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin >>n>>k;
    vector<int> v(n); for(auto& i : v) cin>>i;
    
    if(n==1) {
        cout<<1<<endl;
        return 0;
    }

    for(int i=1; i<n; i++) {
        v[i] = v[i] + v[i-1];
    }

    int idx=-1,mini=INT_MAX;

    for(int i=0; i<n-k+1; i++) {
        int sum = 0;
        if(i==0) sum = v[i+k-1];
        else sum = v[i+k-1] - v[i-1];
        
        if(mini > sum) {
            mini = min(mini,sum);
            idx = i+1;
        }
    }

    cout<<idx<<"\n";

    return 0;
}