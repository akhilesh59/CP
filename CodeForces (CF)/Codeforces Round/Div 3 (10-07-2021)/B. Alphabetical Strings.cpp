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
    string s;
    cin>>s;
    string ans = "";

    vl v(26,0);
    char maxc = 'a';

    for(char i : s) {
        ans += i;
        maxc = max(maxc,i);
    }

    for(char i : ans) v[i-'a']++;

    ll larind = maxc - 'a';

    for(ll i=0; i<=larind; i++) {
        if(v[i] == 1) continue;
        else {
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

