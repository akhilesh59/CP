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

// void sol() {
//     ll n;
//     cin>>n;

// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<vector<int>> v(3,vector<int>(3,1));
    vector<vector<int>> ip(3,vector<int>(3));

    for(int i=0; i<3; i++) for(int j=0; j<3; j++) cin >> ip[i][j];

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(ip[i][j] == 0 || ip[i][j] % 2 == 0) continue;
            else {
                if(i-1 >= 0) v[i-1][j] = v[i-1][j] == 1 ? 0 : 1;
                if(i+1 <= 2) v[i+1][j] = v[i+1][j] == 1 ? 0 : 1;
                if(j-1 >= 0) v[i][j-1] = v[i][j-1] == 1 ? 0 : 1;
                if(j+1 <= 2) v[i][j+1] = v[i][j+1] == 1 ? 0 : 1;
            }
        }
    }

    for(int i=0; i<3; i++) {
        string s = "";
        for(int j=0; j<3; j++) {
            s += v[i][j] == 1 ? '1' : '0';
        }
        cout<<s<<"\n";
    }

    return 0;
}

