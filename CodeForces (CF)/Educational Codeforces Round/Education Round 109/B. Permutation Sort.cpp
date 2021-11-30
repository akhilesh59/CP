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
    ll n, first=0, last=0;
    cin>>n;
    vl v;
    int count=0;

    Fln {
        int tmp;
        cin>>tmp;
        v.pb(tmp);
        if(tmp != i) count++;
        
    }

    if(count == 0) cout<<count<<"\n";
    else {
        if(v[0] == 1 || v[n-1] == n) cout<<"1"<<"\n";
        else if(v[0] == n && v[n-1] == 1) cout<<"3"<<"\n";
        else cout<<"2"<<"\n";

    }

}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

