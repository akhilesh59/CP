#include<bits/stdc++.h>
using namespace std;

int main() {
    int k; cin >> k;
    if(k == 0) {
        cout<<0<<"\n";
        return 0;
    }
    vector<int> v(12);
    for(auto& i : v) cin >> i;

    sort(v.begin(), v.end(), greater<int>());

    int sum = 0 , cnt = 0, i = 0;

    while(sum<k && i<12) {
        sum += v[i++];
        cnt++;
    }

    if(sum < k) cout<<"-1"<<"\n";
    else
    cout<<cnt<<"\n";

    return 0;
}