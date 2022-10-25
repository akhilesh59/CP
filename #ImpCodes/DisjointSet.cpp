#include<bits/stdc++.h>
using namespace std;

using ll = long long;

class DisjointSet {
    vector<int> rank, size, par; // par is for parent;

public:
    DisjointSet(ll n) {
        rank.resize(n+1, 0);
        size.resize(n+1, 1);
        par.resize(n+1);

        for(ll i=0; i<=n; ++i) {
            par[i] = i;
        }
    }

    int findPar(ll node) {
        if(node == par[node]) return node;
        
        return par[node] = findPar(par[node]);
    }

    void unionByRank(ll u, ll v) {
        ll pu = findPar(u);
        ll pv = findPar(v);

        if(pu == pv) return;

        if(rank[pu] < rank[pv]) {
            par[pu] = pv;
        }
        else if(rank[pu] > rank[pv]) {
            par[pv] = pu;
        }
        else {
            par[pv] = pu;
            rank[pu]++;
        }
    }

    void unionBySize(ll u, ll v) {
        ll pu = findPar(u);
        ll pv = findPar(v);

        if(pu == pv) return;

        if(size[pu] < size[pv]) {
            par[pu] = pv;
            size[pv] += size[pu];
        }
        else {
            par[pv] = pu;
            size[pu] += size[pv];
        }
    }

        
};