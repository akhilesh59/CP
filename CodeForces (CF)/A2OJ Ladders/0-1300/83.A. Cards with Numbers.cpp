#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n; cin>>n;
    unordered_map<int,vector<int>> mp;
    int arr[5005] = {0};

    vector<pair<int,int>> v;

    for(int i=1; i<=2*n; i++) {
        int x; cin>>x;
        v.push_back({x,i});
        arr[x]++;
    }


    sort(v.begin(), v.end());
    
    for(int i=0; i<2*n; i+=2) {
        if(arr[v[i].first]%2 != 0) {
            cout<<-1<<"\n";
            return 0;
        }
    }

    for(int i=0; i<2*n; i+=2) {
        cout<<v[i].second<<" "<<v[i+1].second<<"\n";
    }

    return 0;
}