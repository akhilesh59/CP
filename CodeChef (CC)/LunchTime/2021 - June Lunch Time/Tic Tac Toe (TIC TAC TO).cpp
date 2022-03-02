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

bool chk(umpll &mp) {
    int cnt = 0;
    for(auto i : mp) {
        int x = i.first;
        int y = i.second;
        for(auto i : mp) {
            int x1 = i.first;
            int y1 = i.second;
            if(x1 == x+1 && y1 == y) cnt++;
            if(x1 == x+1 && y1 == y+1) cnt++;
            if(x1 == x && y1 == y+1) cnt++;
        }
    }

    if(cnt == 3) return 1;
    else return 0;
}

void sol() {
    ll n,m,k;
    cin>>n>>m>>k;

    umpll mpa;
    umpll mpb;

    for(ll i=1; i<=n*m; i++) {
        int x,y; cin >> x >> y;
        
        if((i%2 == 0)) {
            mpb[x] = y;
            if(chk(mpb)) {
                cout<<"Bob"<<"\n";
                return;
            }
        }
        else {
           mpa[x] = y;
            if(chk(mpa)) {
                cout<<"Alice"<<"\n";
                return;
            }
        }
    }

    cout<<"Draw"<<"\n";

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

