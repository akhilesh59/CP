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

void sol() {
    ll n;
    cin>>n;

    vector<string> v(n);
    Fln cin>>v[i];
    
    bool chk = true;

    Fln {
            string s = v[i];

            if(s[0] >= 97 and s[0] <= 109) {
                for(ll j=1; j<v[i].length();j++) {
                    if(s[j]<97 or s[j]>109) {
                        chk = false;
                        break;
                    }
                }
            }
            else if(s[0] >= 78 and s[0] <= 90) {
                for(ll j=1; j<s.length();j++) {
                    if(s[j]>90 or s[j]<78) {
                        chk = false;
                        break;
                    }
                }
            }
            else chk = false;

            if(!chk) break;
    }

    if(chk) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";

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

