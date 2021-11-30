#include<bits/stdc++.h>             // ------------------>>> ACCEPTED <<<-------------------
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
    ll k;
    cin>>k;

    int count = 0;

    for(int i=k; i>1; i--) {
        if(k%i == 0) {
            if(100%i == 0) {
                k /= i;
                count += (100/i);
                break;
            }
        }
    }

    if(count) cout<<count<<"\n";
    else cout<<100<<"\n";

}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

