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
#define Flnj for(ll j=0; j<n; j++)
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

    vector<vector<ll>> v(n,vector<ll>(n,1));

    if(n == 2) {
        Fln {
        Flnj{
            v[i][j] = -1;
        }
    }
    }

    Fln {
        v[i][i] = -1;  
        
    }

    Fln {
        Flnj{
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
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

