#include<bits/stdc++.h>     // Accepted
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define umpll unordered_map<ll,ll>
#define umpsl unordered_map<string,ll>
#define mkpr make_pair
#define Fien for(int i=0; i<=n; i++)
#define Fln for(ll i=0; i<n; i++)
#define pb push_back
#define complete(v) v.begin(),v.end()
#define itr_v for(auto it = v.begin(); it != v.end; it++)
#define sort_asc(v) sort(v.begin(), v.end())
#define sort_dec(v) sort(v.begin(), v.end(), greater<int> ())
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

void sol() {
    ll k,n;
    cin>>n>>k;

    vl v(k);
    umpll mp;
    for(auto &i : v) {
        cin >> i;
        mp[i]++;
    }

    sort_dec(v);
    ll cnt = 0, cat = 0, mov = n;

    for(ll i=0; i<k; i++) {
        ll need = n-v[i];
        if(mov - need >= 0 && cat + need <= n && cat < v[i]) {
            cnt++;
            mov -= need;
            cat += need;
        }
        else break;
    }

    cout<<cnt<<"\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

