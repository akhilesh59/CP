#include<bits/stdc++.h>     // Accepted -> After Contest (Tutorial)
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
    ll n,x,y,ans,c1=0,c2=0,c3=0;
    cin>>n;

    vl v(n);
    Fln cin>>v[i];

    x = *max_element(complete);
    y = *min_element(complete);

    Fln {
            if(x == v[i]) {
                x = i+1;
                // cout<<x<<" ";
                break;
            }
    }

    Fln {
            if(y == v[i]) {
                y = i+1;
                break;
                // cout<<y<<" ";
            }
    }

    ll a1,a2,a3,a4;

    a1 = max(x,y);
    a2 = n-min(x,y)+1;
    a3 = y + (n-x+1);
    a4 = x + (n-y+1);

    ans = min({a1,a2,a3,a4});

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

