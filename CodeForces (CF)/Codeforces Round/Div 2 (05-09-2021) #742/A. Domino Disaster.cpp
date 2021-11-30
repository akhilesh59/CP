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
    ll n;
    cin>>n;

    string s; cin>>s;
    string ans = "";

    for(int i=0; i<s.length(); i++) {
        if(i<s.length() - 1 && s[i] == 'L' && s[i+1] == 'R') {
            ans += "LR";
            // cout<<1<<"\n";
            i++;
        }

        else if(s[i] == 'L') {
            ans += "R";
            // cout<<2<<"\n";
        }

        else if(s[i] == 'R') {
            ans += "L";
            // cout<<3<<"\n";
        }
        else if(s[i] == 'U') {
            ans += "D";
            // cout<<4<<"\n";
        }
        else if(s[i] == 'D') {
            ans += "U";
            // cout<<5<<"\n";
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

