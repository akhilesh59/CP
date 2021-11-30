// ----------------------------------- ACCEPTED ------------------------------------

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
    ll n;
    cin>>n;

    string s; cin >> s;

    vector<vector<char>> v(n,vector<char>(n,'='));
    vl f(n,0);

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j) v[i][j] = 'X';
            
        }
    }

    for(int i=0; i<n; i++) {
        bool chk = 0;
        for(int j=0; j<n; j++) {
            if(s[i] == '1') {
                f[i] = 1;
                break;
            }
            if(i==j) continue;
            if(chk) {
                v[i][j] = '-';
                v[j][i] = '+';
            }
            else {
                if(s[j] == '2' && v[i][j] == '+') {
                    f[i] = 1;
                    break;
                }
                else if(s[j] == '2' && v[i][j] != '-') {
                    v[i][j] = '+';
                    v[j][i] = '-';
                    chk = 1;
                    f[i] = 1;
                }
            }
        }
    }


    for(auto i : f) {
        if(i == 0) {
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES\n";

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<v[i][j];
            
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

