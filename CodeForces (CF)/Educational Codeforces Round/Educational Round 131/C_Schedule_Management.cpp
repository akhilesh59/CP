/*
    ------------------------------------------- Author : Akhilesh Singh --------------------------------------
    User Handle : akhilesh59
    Disclaimer : Please do not copy my code, it will lead to Plagarism.

    'Abe Padhai likhai pe dhyaan do, IAS-YAS bano aur desh ko sambhalo'
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

#define         F first
#define         S second
#define         vl vector<ll>
#define         umpll unordered_map<ll, ll>
#define         mpll map<ll, ll>
#define         umpsl unordered_map<string, ll>
#define         mkpr make_pair
#define         forl(s,e,f) for (ll i = s; i < e; i+=f)
#define         pb push_back
#define         complete(v) v.begin(), v.end()
#define         itr_v for (auto it = v.begin(); it != v.end; it++)
#define         sort_asc(v) sort(v.begin(), v.end())
#define         sort_dec(v) sort(v.begin(), v.end(), greater<int>())
#define         accu(v) accumulate(v.begin(), v.end(), 0LL)
#define         accu_range(v,x,y) accumulate(v.begin()+x, v.end()-y, 0LL)
#define         print(x) cout<<x<<'\n';
#define         print2(x,y) cout<<x<<' '<<y<<'\n';
#define         deb(x) cout << #x << "=" << x << endl
#define         deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

/*----------------------------------------------------------------------------------------------------------------*/

/*----------------------------- And My code Begins ---------------------------*/

void sol()
{
    ll n,m; cin >> n >> m;
    vl v(m); cin >> v;    
    
    umpll mp;
    for(ll i=1; i<=n; i++) {
        mp[i] = 0;
    }
    for(auto it : v) mp[it]++;   

    vl fq;
    for(auto it : mp) {
        fq.pb(it.S);
    }    
    sort_dec(fq);
    
    // // cout<<"free = "<<free<<'\n';
    
    // priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
    
    // for(auto it : mp) {
    //     ll x = it.F, y = it.S;
    //     if(y != 0) pq.push({y,x});
    // }

    // ll free = n - (ll)pq.size();
    
    // ll cnt = 0, carry = 0;
    
    // while(!pq.empty()) {
    //     auto it = pq.top(); pq.pop();
    //     ll x = it.F, y = it.S;
    //     // deb2(x,y);
    //     // cout<<"x = "<<x<<'\n';
    //     x -= carry;
        
    //     if(free > 0 && x > 2) {
    //         ll sum = 2, rem = x-sum, tmp = 1;
    //         while(rem >= 0 && tmp < free) {
    //             tmp++;
    //             rem = x-2LL*tmp;
    //         }
            
    //         x -= tmp;
    //         // free -= tmp;
    //     }
    //     // cout<<"x = "<<x<<'\n';
    //     carry += x;
    //     cnt+=x;
    //     free++;
    // }

    // Sub Bakchodi thi.....
    // Ab Binary Search on Answer Lagaunga.....

    auto bin_search_on_ans = [] (ll x, vl& fq) {
        ll pending = 0;
        for(auto it : fq) {
            if(it <= x) {
                ll free_time = x-it;
                ll extra_work = free_time/2;
                pending -= min(pending, extra_work);
            }
            else {
                pending += (it - x);
            }
        }
        return pending == 0;
    };

    ll low = 0, high = 2LL*m+1;
    ll ans = -1;

    while(low < high) {
        ll mid = low + (high-low)/2;
        if(bin_search_on_ans(mid, fq)) {
            ans = mid;
            high = mid;
        }
        else low = mid+1;
    }
    
    cout<<ans<<'\n';
        
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t;
    while (t--) sol();
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
