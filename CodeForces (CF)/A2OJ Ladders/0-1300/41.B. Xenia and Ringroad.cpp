#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,m; cin >> n >> m;
    vector<long long> v(m);
    for(auto& i : v) cin >> i;

    long long cnt = 0,counter = 0;

    for (long long i = 0; i < m; i++)
    {
        if(i == 0) {
            cnt = v[i]-1;
            counter = v[i];
        }
        
        else if(v[i] == v[i-1]) continue;
        
        else {
            if(v[i] > v[i-1]) {
                cnt += v[i] - v[i-1];
                counter = v[i];
            }
            else {
                cnt += (n-counter) + (v[i]);
                counter = v[i];
            }
        }
    }

    cout<<cnt<<"\n";
    

    return 0;
}