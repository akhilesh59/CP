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

void sol()
{
    ll n; cin >> n;
    vl v(n); cin >> v;
    string s; cin >> s;

    vl b = v;
    sort_asc(b);

    if(b == v) return void(cout<<0<<'\n');

    ll no=0,so=0; 
    for(char ch : s) {
        if(ch == 'N') no++;
        else so++;
    }

    if(no == n || so == n) return void(cout<<-1<<'\n');

    // ll i=0, j=n-1;

    // while(v[i]==b[i])i++;
	// while(v[j]==b[j])j--;
	
	// bool nor=0,sou=0;
	
	// for(int k=0; k<=i; k++){
	// 	if(s[k]=='N')nor=1;
	// 	else sou=1;
	// }
	
	// if(nor){
	// 	for(int k=n-1; k>=j; k--){
	// 		if(s[k]=='S') return void(cout<<"1\n");
	// 	}
	// }
	// if(sou){
	// 	for(int k=n-1; k>=j;k--){
	// 		if(s[k]=='N') return void(cout<<"1\n");
	// 	}
	// }
	// cout<<"2\n";

    if(s[0] != s[n-1]) return void(cout<<1<<'\n');

    ll id1 = -1, id2 = -1;

    for(ll i=1; i<n; i++) if(v[i] < v[i-1]) {id1 = i-1; break;}

    for(ll i=n-1; i>id1; i--) if(v[i] < v[i-1]) {id2 = i; break;}

    bool no1=0,so1=0,no2=0,so2=0;

    for(ll i=0; i<=id1; i++) {if(s[i] == 'N') no1 = 1; else so1 = 1;}

    for(ll i=n-1; i>=id2; i--) {if(s[i] == 'N') no2 = 1; else so2 = 1;}

    if((no1 && so2) || (so1 && no2)) return void(cout<<1<<'\n');
    else cout<<2<<'\n';
        
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
