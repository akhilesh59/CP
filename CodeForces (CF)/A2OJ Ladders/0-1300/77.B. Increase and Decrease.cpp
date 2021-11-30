#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,sum=0; cin >> n;
    vector<int> vn(n); 
    for(auto& i : vn) {
        cin>>i;
        sum += i;
    }

    if(sum%n) cout<<n-1<<"\n";
    else cout<<n<<"\n";

    return 0;
}