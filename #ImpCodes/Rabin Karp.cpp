#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long get_hash(string s) {
    int n = size(s);
    long long h = 0;
    for (int i = 0; i < n; i++) h = (h * 31 + (s[i] - 'a' + 1)) % MOD;
    return h;
}

vector<int> rabin_karp(string txt, string pat) {
    int n = size(txt), m = size(pat);
    long long p = 1;
    for (int i = 0; i < m - 1; i++) p = (p * 31) % MOD;
    vector<int> pos;
    long long ht = get_hash(pat);
    long long hs = get_hash(txt.substr(0, m));
    if (hs == ht) pos.push_back(0);
    for (int l = 1, r = m; r < n; l++, r++) {
        int del = ((txt[l - 1] - 'a' + 1) * p) % MOD;
        int add = txt[r] - 'a' + 1;
        hs = ((hs - del + MOD) * 31 + add) % MOD;
        if (hs == ht) pos.push_back(l);
    }
    return pos;
}

int main() {
    string txt, pat;
    cin >> txt;
    cin >> pat;
    
    vector<int> indices = rabin_karp(txt, pat);
    
    for(auto it : indices) cout<<it<<' ';
    cout<<'\n';
    
    return 0;
}