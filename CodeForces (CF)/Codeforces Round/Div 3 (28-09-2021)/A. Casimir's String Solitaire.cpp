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
    string s; cin >> s;
    ll n,a = 0,b =0,c=0,rem=0;
    n = s.length();

    Fln {
        if(s[i] == 'A') a++;
        else if(s[i] == 'B') b++;
        else if(s[i] == 'C') c++;
    }

    rem = b-a;

    if(a-b == 0 && c==0) {
        cout<<"YES\n";
        return;
    }
    else if(rem > 0 && rem-c == 0) {
        cout<<"YES\n";
        return;
    }

    cout<<"NO\n";
    

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

