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
#define sort_dec sort(tmp.begin(), tmp.end(), greater<int> ())

void sol() {

    vl v(4);
    vl tmp;
    ll max1=0,max2=0;
    for(ll i=0; i<4; i++) {
        cin >> v[i];
    }
    tmp = v;
    sort_dec;
    max1 = tmp[0];
    max2 = tmp[1];

    ll res1 = max(v[0],v[1]);
    ll res2 = max(v[2],v[3]);

    if(max1 == res1 and max2 == res2) {
        cout<<"YES"<<"\n";
        return;
    }
    else if(max1 == res2 and max2 == res1) {
        cout<<"YES"<<"\n";
        return;
    }

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

