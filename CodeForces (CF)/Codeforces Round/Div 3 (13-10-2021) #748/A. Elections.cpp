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
    ll a,b,c;
    cin>>a>>b>>c;

    ll a1 = max(b,c) - a;
    ll b1 = max(a,c) - b;
    ll c1 = max(a,b) - c;

    if(a1 >= 0) cout<<a1+1<<" ";
    else cout<<0<<" ";
    if(b1 >= 0) cout<<b1+1<<" ";
    else cout<<0<<" ";
    if(c1 >= 0) cout<<c1+1<<" ";
    else cout<<0<<" ";

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

