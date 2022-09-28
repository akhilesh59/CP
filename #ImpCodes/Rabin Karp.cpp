#include <bits/stdc++.h>
using namespace std;

vector<int> RabinKarp(string& pat, string& txt, int mod) {
    int n = txt.length(), m = pat.length();
    int d = 256; // muliplicative factor, because there are 256 characters
    
    int i, j;
    int p = 0; // hash value for pattern
    int t = 0; // hash valur for the text
    
    int h = 1; // value will be used for excluding the leftmost character form the window
    
    for(i=0; i<m-1; ++i) {
        h = (h*d)%mod;
    }
    
    vector<int> indices; // it will hold the indices where the pattern is found
    
    // Calculate the hash value of the pattern and first window of text
    for(i=0; i<m; ++i) {
        p = (p*d + pat[i]);
        t = (t*d + txt[i]);
    }
    
    // cout<<"p = "<<p<<'\n'<<"t = "<<t<<'\n';
    
    // Now slide the pattern over the text one by one:
    for(i=0; i<=n-m; ++i) {
        if(p == t) {
            for(j=0; j<m; ++j) {
                if(pat[j] != txt[i+j]) break;
            }
        }
        
        if(j == m) {
            j=0;
            indices.push_back(i);
        }
        
        if(i < n-m) {
            t = (( t - txt[i]*h )*d + txt[i+m]);
            
            if(t<0) t += mod;
        }
    }
    
    return indices;
    
    
}

int main() {
    string txt, pat;
    cin >> txt;
    cin >> pat;
    
    vector<int> indices = RabinKarp(pat, txt, 1e9+7);
    
    for(auto it : indices) cout<<it<<' ';
    cout<<'\n';
    
    return 0;
}