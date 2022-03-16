/*
    ------------------------------------------- Author : Akhilesh Singh --------------------------------------
    User Handle : akhilesh59
    Disclaimer : Please do not copy my code, it will lead to Plagarism.

    Status : Accepted

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

/* LIS Code taken From GFG : https://www.geeksforgeeks.org/longest-monotonically-increasing-subsequence-size-n-log-n/ */

ll CeilIndex(vector<ll>& v, ll l, ll r, ll key)
{
	while (r - l > 1) {
		ll m = l + (r - l) / 2;
		if (v[m] >= key)
			r = m;
		else
			l = m;
	}

	return r;
}
ll FloorIndex(vector<ll>& v, ll l, ll r, ll key)
{
	while (r - l > 1) {
		ll m = l + (r - l) / 2;
		if (v[m] <= key)
			r = m;
		else
			l = m;
	}

	return r;
}

void sol()
{
    ll n,m=0,k=1,temp=0;
	cin >> n;
	vl v(n); cin >> v;

    ll a[n]={0},b[n]={0};
    
    if (v.size() != 0)
    {
        vl tail(v.size(), 0);
        ll length = 1; 
        tail[0] = v[0];
        a[0]=1;
        for (size_t i = 1; i < v.size(); i++) 
        {
            if (v[i] < tail[0])
                tail[0] = v[i];
            else if (v[i] > tail[length - 1])
                tail[length++] = v[i];
            else
                tail[CeilIndex(tail, -1, length - 1, v[i])] = v[i];
            a[i]=length;	
        }
    
    }
    
    reverse(v.begin(),v.end());
    
    if (v.size() != 0)
    {
        vector<ll> tail(v.size(), 0);
        ll length = 1; 
        tail[0] = v[0];
        b[0]=1;
        for (size_t i = 1; i < v.size(); i++) 
        {
            if (v[i] > tail[0])
                tail[0] = v[i];
            else if (v[i] < tail[length - 1])
                tail[length++] = v[i];
            else
                tail[FloorIndex(tail, -1, length - 1, v[i])] = v[i];
            b[i]=length;	
        }
    
    }
	   
    ll mx=INT_MIN;
    for(ll i=0;i<n-1;i++)
    {
        mx=max(mx,a[i]+b[n-i-2]);
    }
    for(ll i=0;i<n-1;i++)
    {
        mx=max(mx,b[i]+a[n-i-2]);
    }
    cout<<mx<<"\n";
	
	// if(n<3) return void(cout<<n<<'\n');
	
	// vl flis(n),blis(n);
	// set<ll> st;
	
	// for(ll i=0; i<n; i++){
	// 	st.insert(a[i]);
	// 	auto it = st.upper_bound(a[i]);
	// 	if(it != st.end()) st.erase(it);
	// 	flis[i] = st.size();
	// }
	
	// st.clear();
	
	// for(ll i=n-1; i>=0; i--){
	// 	a[i] = 0-a[i];
	// 	st.insert(a[i]);
	// 	auto it = st.upper_bound(a[i]);
	// 	if(it != st.end()) st.erase(it);
	// 	blis[i] = st.size();
	// }
	
	// for(ll i=1; i<n; i++){
	// 	m = max(m,0LL+flis[i-1]+blis[i]);
	// }
	
	// cout<<m<<'\n';
        
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
