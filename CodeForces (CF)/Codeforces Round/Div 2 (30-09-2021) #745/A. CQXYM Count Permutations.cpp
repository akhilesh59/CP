#include<bits/stdc++.h>
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
#define complete v.begin(),v.end()
#define itr_v for(auto it = v.begin(); it != v.end; it++)
#define sort_asc sort(v.begin(), v.end())
#define sort_dec sort(v.begin(), v.end(), greater<int> ())
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

ll mod = 1e9+5;

void sol(vector<ll>& dp) {
    ll n;
    cin>>n;

    ll ans = (dp[2*n - 1] * n)%mod;

    cout<<ans<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> dp(100000,0);

    dp[0] = 1;
    dp[1] = 1;

    // for(ll i=2; i<100000; i++) {
    //     // cout<<"hi\n";
    //     dp[i] = ((dp[i-1]%mod)*i)%mod;
    // }
    
    cout<<dp[111]<<"\n";

    ll t;
    cin>>t;

    while(t--) {
        sol(dp);
    }

    return 0;
}

