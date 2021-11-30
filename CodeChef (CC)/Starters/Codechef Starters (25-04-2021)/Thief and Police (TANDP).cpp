#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define vl vector<long long>

void fun() {

    string y = "YES";
    string n = "NO";

    ll N, M, x, y2, a, b, minp=0, mint=0;
    cin >> N >> M >> x >> y2 >> a >> b;

    mint = (M-y2) + (N-x);
    minp = max(N-a,M-b);

    if(mint <= minp) cout<<y<<endl;
    else cout<<n<<endl;

}

int main() {
    ll t;
    cin>>t;

    while(t--) {
        fun();
    }

    return 0;
}