#include<bits/stdc++.h>                              // ACCEPTED
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define umpll unordered_map<ll,ll>
#define umpsl unordered_map<string,ll>
#define mkpr make_pair
#define Flen for(ll i=0; i<=n; i++)
#define Fln for(ll i=0; i<n; i++)
#define pb push_back
#define complete v.begin(),v.end()
#define itr_v for(auto it = v.begin(); it != v.end; it++)
#define sort_asc sort(v.begin(), v.end())
#define sort_dec sort(v.begin(), v.end(), greater<int> ())

void sol() {
    ll n;
    cin>>n;
    string str;
    cin>>str;
    if(n == 1) {
        cout<<"YES"<<endl;
        return;
    }
    
    ll arr[26] = {0};

    for(ll i=0; i<n-1; i++) {
        
        ll tmp = str[i] - 'A';
        if(arr[tmp] > 0) {
            cout<<"NO"<<endl;
            return;
        }
        if(str[i] != str[i+1]) arr[tmp]++;

    }

    ll k = str[n-1] - 'A';

    if(arr[k] > 0) {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;

}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

