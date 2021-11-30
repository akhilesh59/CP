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

void sol() {
    ll n,a,b;
    cin>>n>>a>>b;
    string s;
    cin >> s;
    string prev="",next="";
    ll ans = 0, cs = 1;

    if(a < 0 && b > 0) {
        ans = b*n + a*n;
    }

    else if(b < 0) {
        ll zc=0,oc=0;
        if(s[0] == '1') {
            for(ll i=0; i<n; i++) {
                if((s[i] == '1' && s[i+1] == '0') && i+1<n) cs++;
            }
        }
        else if(s[0] == '0') {
            for(ll i=0; i<n; i++) {
                if((s[i] == '0' && s[i+1] == '1') && i+1<n) cs++;
            }
        }

        ans = a*n + cs*b;
        
    }

    else {
        ans = a*n + b*n;
    }

    cout<<ans<<"\n";

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

