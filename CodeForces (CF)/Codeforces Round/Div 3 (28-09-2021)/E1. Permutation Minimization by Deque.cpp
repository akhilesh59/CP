#include<bits/stdc++.h>  // Accepted
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

void sol() {
    ll n,k=0;
    cin>>n;

    vl v(n); 
    for(auto &i : v) cin >> i;

    deque<ll> dq;
    ll e=v[0],f,b;
    dq.push_front(e);
    k++;

    for(ll i=1; i<n; i++) {
        e = v[i];
        f = dq.front();
        b = dq.back();

        if(e<f) {
            dq.push_front(e);
        }
        else {
            dq.pb(e);
        }
    }

    for(auto i : dq) cout<<i<<" ";
    cout<<"\n";

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

