#include <bits/stdc++.h>
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

bool isPal(string s) {
    string tmp = s;
    reverse(tmp.begin(), tmp.end());

    return (s == tmp);

}

void sol()
{
    ll n;
    cin >> n;
    string s; cin >> s;

    if(isPal(s)) {
        cout<<0<<'\n';
        return;
    }

    ll t1,t2;
    t1 = s[0] - 'a';
    t2 = s[n-1] - 'a';

    bool chk = false;
    if(t1 != t2) chk = true;

    ll fq[26] = {0};
    ll i=0, j=n-1;

    while(i<j) {
        if(s[i] != s[j]) {
            fq[s[i] - 'a']++;
            fq[s[j] - 'a']++;
        }
        i++;
        j--;
    }

    ll maxi = INT_MIN, idx=-1;

    for(ll i=0; i<26; i++) {
        if(maxi < fq[i]) {
            idx = i;
            maxi = fq[i];
        }
    }
    
    if(chk) {
        if(maxi == fq[t1]) {
            string tmp="";
            Fln {
                if(s[i] - 'a' == t1) continue;
                else tmp += s[i];
            }

            if(isPal(tmp)) {
                cout<<fq[t1]<<'\n';
                return;
            }
            
        }
        else if(maxi == fq[t2]) {
            string tmp="";
            Fln {
                if(s[i] - 'a' == t2) continue;
                else tmp += s[i];
            }

            if(isPal(tmp)) {
                cout<<fq[t2]<<'\n';
                return;
            }
        }
        else {
            cout<<-1<<'\n';
            return;
        }
    }

    string str = "";
    Fln {
        if(s[i]-'a' == idx) continue;
        else {
            str += s[i];
        }
    }

    if(isPal(str)) {
        cout<<fq[idx]<<'\n';
    }
    else cout<<-1<<'\n';

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

/*
*
*　　┏┓　　　┏┓+ +
*　┏┛┻━━━┛┻┓ + +
*　┃　　　　　　　┃
*　┃　　　━　　　┃ ++ + + +
*  +████━████++
*  ◥██◤　◥██◤ +
*　┃　　　┻　　　┃
*　┃　　　　　　　┃ + +
*　┗━┓　　　┏━┛
*　　　┃　　　┃ + + + + 
*　　　┃　　　┃ + Beware of the Dog
*　　　┃　 　 ┗━━━┓ 　
*　　　┃ 　　　　　　 ┣┓
*　　  ┃ 　　　　　 　┏┛
*　    ┗┓┓┏━┳┓┏┛ + + + +
*　　　　┃┫┫　┃┫┫
*　　　　┗┻┛　┗┻┛+ + + +
*/
