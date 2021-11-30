#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> v(n+1);

    if(n%2 != 0) {
        cout<<"-1"<<"\n";
        return 0;
    }

    for(int i=1; i<=n; i++) {
        v[i] = i;
    }

    for(int i=1; i<=n; i++) {
        swap(v[i],v[i+1]);
        i++;
    }

    v.erase(v.begin()+0);

    for(auto i : v) cout<<i<<" ";    

    return 0;
}