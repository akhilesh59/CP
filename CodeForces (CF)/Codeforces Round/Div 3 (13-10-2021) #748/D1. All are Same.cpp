#include<bits/stdc++.h>  // Accepted - After Contest
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
    ll n;
    cin>>n;
    vl v(n);
    ll mini = 1e15;
    for(auto &i : v) {
        cin >> i;
        mini = min(mini,i);
    }

    vl tmp;

    for(auto i : v) {
        if(i != mini) {
            tmp.pb(i-mini);
        }
    }

    ll gcd = 0;

    for(ll i=0; i<tmp.size(); i++) {
        gcd = __gcd(gcd,tmp[i]);
    }

    if(gcd >= 1) cout<<gcd<<"\n";
    else cout<<"-1\n";

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

