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
    ll g,p;
    cin >> g >> p;

    int mini=0,maxi=0,sum=0,s=0;

    vi v(11);
    for(int i=0; i<=9; i++) cin >> v[i];


    for(int i=9; i>=g-1; i--) {
        sum += v[i];
    }

    mini = sum/p;
    if(mini == 0) mini++;
    if(sum%p != 0) maxi++;
    maxi += sum/p;


    cout << mini << " " << maxi << "\n";

} 

int main() {
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

