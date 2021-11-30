#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second

int main() {
    int n, streak = 1, maxi=INT_MIN;
    cin >> n;
    
    vector<int> v(n); for(auto& i : v) cin >> i;

    sort(v.begin(), v.end());

    for(int i=1; i<n; i++) {
        if(v[i] == v[i-1]) streak++;
        else {
            maxi = max(maxi,streak);
            streak = 0;
        }
    }

    if(maxi > ((n+1)/2)) cout<<"NO\n";
    else cout<<"YES\n";

    return 0;
}