/*
    ------------------------------------------- Author : Akhilesh Singh --------------------------------------
    User Handle : akhilesh59
    Disclaimer : Please do not copy my code, it will lead to Plagarism.

    Status : 

    'Abe Padhai likhai pe dhyaan do, IAS-YAS bano aur desh ko sambhalo. Lekin nhi, tumko to SDE banna hai!'
*/

#include <bits/stdc++.h>
// #include <sys/resource.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace __gnu_pbds;

/*-------------------------------------------------------------------------------------------------------------------------*/

// Pragmas
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// template<typename T>
// using oset =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;

// Constants
constexpr ll INF = 2e18;
constexpr ld EPS = 1e-9;
constexpr ll MOD = 998244353;//1e9 + 7;

// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }

template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v)
{
	for (auto &it : v)
		cin >> it;
	return istream;
}

template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

template <typename T> // Slicing a sub-vector
vector<T> slicing(vector<T> const& v,ll X, ll Y) {auto first = v.begin() + X; auto last = v.begin() + Y + 1; vector<T> vector(first, last); return vector;}

/*----------------------------------------------------------------------------------------------------------------------*/

//----------------Functions---------------------//

//--------------------------------- Sieve of Eratosthenes -----------------------------------

vector<ll> sieveOfEratosthenes(ll n) { vector<ll> arr(n+1); for(ll i = 2; i <= n; i++) { if(arr[i] == 0) { for (ll j = i*i; j <= n; j += i) { arr[j] = 1;} } } /* for(int i=2; i<=n; i++) { if(arr[i] == 0) cout<<i<<" ";} cout<<endl;*/ return arr; }

//-----------------------------------------------------------------

vector<ll> prFactUsingSieve(ll n) { vector<ll> arr(n+1); vector<ll> ans; for (ll i = 0; i <= n; i++) arr[i] = i; for (ll i = 2; i <= n; i++) { if(arr[i] == i) { for(ll j=i*i; j<=n; j+=i) { if(arr[j] == j) {arr[j] = i;} } } } while(n != 1) { /*cout<<arr[n]<<" ";*/ ans.push_back(arr[n]); n /= arr[n]; } return ans; }

//--------------------------------- Modulo Operations -----------------------------------

ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3

ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}

ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m

//--------------------------- Euclid's Algo ---------------------------------------------------

ll gcd(ll a, ll b) { ll rem; while(b) { rem = a%b; a = b; b = rem; } return a; }

int binaryGCD(int a, int b) { if(!a || !b) {return a | b;} int commonMultiplesOf2 = __builtin_ctz(a|b); a >>= __builtin_ctz(a); b >>= __builtin_ctz(b); while(b) { b >>= __builtin_ctz(b); if(a>b) {swap(a,b);} b -= a; } return (a << commonMultiplesOf2); }

ll extendedEuclid2(ll a, ll b, ll& x, ll& y) { if(b == 0) {x = 1; y = 0; return a;} ll x1,y1; ll gcd = extendedEuclid2(b ,(a%b) , x1, y1); x = y1; y = x1 - floor(a/b)*y1; return gcd;}

ll LCM(ll a, ll b) {return ((ll)a * b) / gcd(a, b);}

//--------------------------------------- Binary Exponentiation -------------------------------------

ll binpow(ll a, ll b, ll m) {a %= m; ll res = 1; while (b > 0) {if (b & 1) res = res * a % m; a = a * a % m; b >>= 1;} return res;}

/*------------------------------------------------------------------------------------------------------------------*/

//------------------------------------------------------- Macros -----------------------------------------

#define         vi vector<int>
#define         vl vector<ll>
#define         umpll unordered_map<ll, ll>
#define         umpsl unordered_map<string, ll>
#define         mkpr make_pair
#define         Fien for (int i = 0; i <= n; i++)
#define         Fln for (ll i = 0; i < n; i++)
#define         pb push_back
#define         complete(v) v.begin(), v.end()
#define         itr_v for (auto it = v.begin(); it != v.end; it++)
#define         sort_asc(v) sort(v.begin(), v.end())
#define         sort_dec(v) sort(v.begin(), v.end(), greater<int>())
#define         deb(x) cout << #x << "=" << x << endl
#define         deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

/*----------------------------------------------------------------------------------------------------------------*/

/*----------------------------- And My code Begins ---------------------------*/

ll mc(ll x, ll mod) {
    ll cnt = 0;
    for(ll i=0; i<=15; i++) {
            if(x%mod == 0) break;
            x *= 2;
            cnt++;
    }
    return cnt;
}

void sol()
{
    ll n; cin >> n;
    vl v(n); cin >> v;

    ll mod = 32768;

    vl ans(n);

    for(ll i=0; i<n; i++) {
        ll a1 = INT_MAX, a2 = 0, a3 = 0;
        ll t1 = v[i], t2 = v[i], t3 = v[i];

        for(ll i=0; i<=15; i++) {
            ll cnt = i + mc(t1+i, mod);
            a1 = min(a1,cnt);
            if(t1%mod == 0) break;
        }

        ans[i] = a1;
    }

    cout<<ans<<'\n';
        
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // ll t=1; 
    // // cin >> t;
    // while (t--) 
    sol();
    return 0;
}

/*

                                        _¶¶_______________¶¶
                                        _¶¶_______¶¶¶¶¶¶¶¶¶¶
                                        __¶¶_____¶¶¶¶¶_¶¶¶¶_
                                        __¶¶__¶__¶¶___¶_____
                                        _¶¶¶_¶¶¶_¶¶¶_¶¶¶____
                                        _¶¶¶_____¶¶¶________
                                        _¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_
                                        __¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_
                                        __________¶¶_____¶¶_
                                        _____¶¶¶__¶¶_¶¶¶_¶¶_
                                        ______¶___¶¶__¶__¶¶_
                                        __¶¶¶¶¶¶¶¶¶¶_____¶¶_
                                        ¶¶¶¶____¶¶________¶¶

                    ──╔╗╔═══╗╔══╗     ╔═══╗╔╗─╔╗╔═══╗╔═══╗╔═══╗     ╔═══╗╔═══╗╔═╗╔═╗   
                    ──║║║╔═╗║╚╣─╝     ║╔═╗║║║─║║║╔═╗║║╔══╝║╔══╝     ║╔═╗║║╔═╗║║║╚╝║║
                    ──║║║║─║║─║║─     ║╚══╗║╚═╝║║╚═╝║║╚══╗║╚══╗     ║╚═╝║║║─║║║╔╗╔╗║
                    ╔╗║║║╚═╝║─║║─     ╚══╗║║╔═╗║║╔╗╔╝║╔══╝║╔══╝     ║╔╗╔╝║╚═╝║║║║║║║
                    ║╚╝║║╔═╗║╔╣─╗     ║╚═╝║║║─║║║║║╚╗║╚══╗║╚══╗     ║║║╚╗║╔═╗║║║║║║║
                    ╚══╝╚╝─╚╝╚══╝     ╚═══╝╚╝─╚╝╚╝╚═╝╚═══╝╚═══╝     ╚╝╚═╝╚╝─╚╝╚╝╚╝╚╝                                        


*/
