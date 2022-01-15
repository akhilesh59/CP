/*
    ------------------------------------------- Author : Akhilesh Singh --------------------------------------
    User Handle : akhilesh59
    Disclaimer : Please do not copy my code, it will lead to Plagarism.

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

/*----------------------------------------------------------------------------------------------------------------------*/

//----------------Functions---------------------//

//--------------------------------- Sieve of Eratosthenes -----------------------------------

vl sieveOfEratosthenes(ll n) {
    vl arr(n+1);

    for(ll i = 2; i <= n; i++) {
        if(arr[i] == 0) {
            for (ll j = i*i; j <= n; j += i)
            {
                arr[j] = 1;
            }
        }
        
    }
    
    // for(int i=2; i<=n; i++) {
    //     if(arr[i] == 0) cout<<i<<" ";
    // }
    // cout<<endl;
    return arr;
}

//-----------------------------------------------------------------

vl prFactUsingSieve(ll n) {
    vl arr(n+1);
    vl ans;
    for (ll i = 0; i <= n; i++) arr[i] = i;

    for (ll i = 2; i <= n; i++)
    {
        if(arr[i] == i) {
            for(ll j=i*i; j<=n; j+=i) {
                if(arr[j] == j) {
                    arr[j] = i;
                }
            }
        }
    }
    
    while(n != 1) {
        // cout<<arr[n]<<" ";
        ans.pb(arr[n]);
        n /= arr[n];
    }

    return ans;
    
}

//--------------------------- Euclid's Algo ---------------------------------------------------

ll gcd(ll a, ll b) {
    ll rem;
    while(b) {
        rem = a%b;
        a = b;
        b = rem;
    }

    return a;
}

int binaryGCD(int a, int b) {
    if(!a || !b) {     // if any of a,b is zero
        return a | b;  // then return the non-zero value
    }

    int commonMultiplesOf2 = __builtin_ctz(a|b); // yahi factors k product se multiply kar k last me answer return karna hai

    a >>= __builtin_ctz(a); // a me se saare 2 k multiples nikal do (2nd point of Algo)
    b >>= __builtin_ctz(b);

    while(b) {
        b >>= __builtin_ctz(b); // if only b is even we can simply neglect its multiples of 2

        if(a>b) {
            swap(a,b);
        }

        b -= a; 
    }

    return (a << commonMultiplesOf2);

}

ll extendedEuclid2(ll a, ll b, ll& x, ll& y) { // without using struct, and this function will return 
//GCD of a and b but will change the values of x and y at their respective addresses
    
    if(b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    
    ll x1,y1;
    ll gcd = extendedEuclid2(b ,(a%b) , x1, y1);
    
    x = y1;
    y = x1 - floor(a/b)*y1;
    
    return gcd;
    
}

ll LCM(ll a, ll b)
{
    return ((ll)a * b) / gcd(a, b);
}

//--------------------------------------- Binary Exponentiation -------------------------------------

ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

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
    ll n;
    cin >> n;
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
