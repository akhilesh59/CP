#include<bits/stdc++.h>                     // ---------------- EDITORIAL   -----------------
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define umpll unordered_map<ll,ll>
#define umpsl unordered_map<string,ll>
#define mkpr make_pair
#define Fien for(int i=0; i<=n; i++)
#define Flm for(ll i=0; i<m; i++)
#define pb push_back
#define complete v.begin(),v.end()
#define itr_v for(auto it = v.begin(); it != v.end; it++)
#define sort_asc sort(v.begin(), v.end())
#define sort_dec sort(v.begin(), v.end(), greater<int> ())

void sol() {
    ll n,m;
    cin>>n>>m;
    vl v(m);
    umpll last_index_map;
    set<ll> st;
    ll cnt=0;

    Flm {
        cin>>v[i];
        last_index_map[v[i]] = i;   // storing the last index where that number occured last in the input vector
    }

    // Here below, we are storing the last occuring index of all the unique elements. Using set will store the elements in sorted and unique manner

    for(auto i = last_index_map.begin(); i != last_index_map.end(); i++) {
        st.insert(i -> second);
    }

    ll ans = m - *st.begin();     // Initially not using or popping from front

    Flm {
        if(st.count(last_index_map[v[i]])) {
            // Checking if the last index of the current element is stored in the set or not, if stored then remove it because we are popping it from front so that means we do not pop it from the back
            st.erase(last_index_map[v[i]]);
        }
        if(!st.empty()) {
            // If set is not empty then calculate the total popped using front and back, otherwise use the front only. We will take the minimum ans of popping from front and from back.
            ans = min(ans, (i + (m - *st.begin())) + 1); // +1 is to overcome zero based indexing
        }
        else {
            ans = min(ans, i+1);
        }
    }

    cout<<ans<<"\n";
        

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

