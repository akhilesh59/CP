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
        ll a,b,c,x,y,z;
        cin>>a>>b>>c>>x>>y>>z;

        // vector<pair<ll,ll>> v;
        // v.pb({x,a});
        // v.pb({y,b});
        // v.pb({z,c});

        // sort_asc;

        ll t=240,ans1=0,ans2=0,ans3=0,ans = 0;


        ans1 = INT_MIN;

        for(ll i=0; i<=20; i++) {
            for(ll j=0; j<=20; j++) {
                for(ll k=0; k<=20; k++) {
                    if((i*a + j*b + k*c)<=240)
                        ans1 = max(ans1,i*x + j*y + k*z);
                }
            }
        }

        cout<<ans1<<"\n";

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

