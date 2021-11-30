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
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

void sol() {
    ll xa,ya,xb,yb,xf,yf,diff=0;
    cin >> xa>> ya>>xb>>yb>>xf>>yf;

    diff = abs(xa-xb) + abs(ya-yb);

    if(xa == xb && xb == xf) {
        if((yf > ya && yf < yb) || (yf < ya && yf > yb)) {
            diff += 2;
        }
    }

    else if(ya == yb && yb == yf) {
        if((xf > xa && xf < xb) || (xf < xa && xf > xb)) {
            diff += 2;
        }
    }

    cout<<diff<<"\n";

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

