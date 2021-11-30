#include <bits/stdc++.h>            // Accepted
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define umpll unordered_map<ll, ll>
#define umpsl unordered_map<string, ll>
#define mkpr make_pair
#define Fien for (int i = 0; i <= n; i++)
#define Fln for (ll i = 0; i < n; i++)
#define pb push_back
#define complete(v) v.begin(), v.end()
#define itr_v for (auto it = v.begin(); it != v.end; it++)
#define sort_asc(v) sort(v.begin(), v.end())
#define sort_dec(v) sort(v.begin(), v.end(), greater<int>())
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

ll helper(string s) {
    ll size = s.length();

    vl ans;
    ll cnt = 0, sum = 0;

    for(ll i=0; i<size; i++) {
        if(s[i] == '0') {
            ans.pb(cnt);
        } 
        else if(s[i] == '1') cnt++;
    }

    for(auto i : ans) sum += i;

    return sum;
}

bool cmp(string &s1, string &s2) {
    ll oc1 = 0, oc2 = 0;
    for(char c : s1) {
        if(c == '1') oc1++;
    }
    for(char c : s2) {
        if(c == '1') oc2++;
    }

    return (oc1<oc2);
}

void sol()
{
    ll n,m;
    cin >> n >> m;

    vector<string> vs(n);
    for(auto &i : vs) cin >> i;

    sort(vs.begin(), vs.end(), cmp);

    string s1 = "";

    Fln {
        s1 += vs[i];
    }

    ll ans1 = helper(s1);

    cout<<ans1<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        sol();
    }

    return 0;
}

