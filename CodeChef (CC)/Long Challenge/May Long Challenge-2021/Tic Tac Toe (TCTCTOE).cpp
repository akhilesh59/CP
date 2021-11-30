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

int chk(string a, string b, string c) {

    int count = 0;

    // Checking for the rows:
    if(a[0] == a[1] && a[1] == a[2]) count++;
    if(b[0] == b[1] && b[1] == b[2]) count++;
    if(c[0] == c[1] && c[1] == c[2]) count++;

    // Checking for columns: 
    if(a[0] == b[0] && b[0] == c[0]) count++;
    if(a[1] == b[1] && b[1] == c[1]) count++;
    if(a[2] == b[2] && b[2] == c[2]) count++;

    // Checking for diagonals:
    if(a[0] == b[1] && b[1] == c[2]) count++;
    if(c[0] == b[1] && b[1] == a[2]) count++;

    if(count > 1) return 3;
    else if(count == 1) return 1;
    return 0;
}

// int possibility(string a, string b, string c) {

// }

void sol() {
    string a,b,c;
    cin >> a >> b >> c;

    int ans = chk(a,b,c);
    if(ans > 0) {
        cout<<ans<<"\n";
        return;
    }

    cout<<"2\n";
    return;

}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        sol();
    }

    return 0;
}

