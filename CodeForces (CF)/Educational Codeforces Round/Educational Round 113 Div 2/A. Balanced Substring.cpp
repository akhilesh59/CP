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
    ll n,a=0,b=0;
    cin>>n;

    string str;
    cin>>str;
    string s = "x" + str ;

    if(n>1) {
        for(int i=1; i<=n;i++) {
            a=0;
            b=0;
            for(int j=i; j<=n; j++) {
                if(s[j] == 'a') a++;
                else if(s[j] == 'b') b++;
                if(a > 0 && b > 0 && (a == b)) {
                    cout<<i<<" "<<j<<"\n";
                    return;
                }
            }
        }
    }

    cout<<-1<<" "<<-1<<"\n";

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

