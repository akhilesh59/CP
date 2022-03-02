#include<bits/stdc++.h>                     // --------------- ACCEPTED -----------------
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
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    vl v(k);
    for(ll i=0; i<k; i++) cin>>v[i];

    vl sv(n);
    Fln {
        if(s[i] == '0') sv[i] = 0;
        else sv[i] = 1;
    }

    ll dis = 0;

    for(ll i=0; i<n-1; i++) {
        if(sv[i] == sv[i+1]) dis += 2;
        else dis += 1;
    }


    for(ll i=0; i<k; i++) {
        ll ind = v[i]-1;
        if(ind<n-1 and sv[ind] == sv[ind+1]) {
            dis -= 1;
        }
        else if(ind<n-1) {
            dis += 1;
        }

        if(ind>0 and sv[ind] == sv[ind-1]) {
            dis -= 1;
        }
        else if(ind>0) {
            dis += 1;
        }

        if(sv[ind] == 0) sv[ind] = 1;
        else sv[ind] = 0;

        cout<<dis<<"\n";
    }

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

