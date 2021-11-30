#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define umpll unordered_map<ll,ll>
#define umpsl unordered_map<string,ll>
#define mkpr make_pair
#define Fien for(int i=0; i<=n; i++)
#define Fln for(ll i=1; i<=n; i++)
#define pb push_back
#define complete v.begin(),v.end()
#define itr_v for(auto it = v.begin(); it != v.end; it++)
#define sort_asc sort(v.begin(), v.end())
#define sort_dec sort(v.begin(), v.end(), greater<int> ())

void sol() {
    ll n;
    cin>>n;
    vl v(n+1);

    Fln {
        v[i] = i;
    }

    if(n%2 == 0) {
        for(ll i=1; i<n; i++) {
            swap(v[i], v[i+1]);
            i++;
        }
    }
    else {
        for(ll i=1; i<n-1; i++) {
            swap(v[i], v[i+1]);
            i++;
        }
        swap(v[n],v[n-2]);
    }

    for(ll i=1; i<=n; i++) {
           cout<<v[i]<<" ";
        }

        cout<<"\n";

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

