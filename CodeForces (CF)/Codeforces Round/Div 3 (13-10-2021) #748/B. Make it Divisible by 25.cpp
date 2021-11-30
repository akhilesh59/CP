#include<bits/stdc++.h>     // Accepted - After Contest
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

    string s; cin >> s;

    ll ans = INT_MAX;

    for(ll i=s.length()-1; i>0; i--) {
        if(s[i] == '0') {
            for(ll j=i-1; j>=0; j--) {
                if(s[j] == '0' || s[j] == '5') {
                    ll tmp = ((i-j-1) + (s.length()-1-i));
                    ans = min(ans,tmp);
                }
            }
        }

        if(s[i] == '5') {
            for(ll j=i-1; j>=0; j--) {
                if(s[j] == '2' || s[j] == '7') {
                    ll tmp = (i-j-1) + (s.length()-1-i);
                    ans = min(ans,tmp);
                }
            }
        }

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

