#include<bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<int> ans;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0) {
            int d = n/i;
            if(i==d) {
                ans.push_back(i);
                continue;
            }
            ans.push_back(i);
            ans.push_back(d);
        }
    }


    sort(ans.begin(),ans.end());

    cout<<ans.size()<<"\n";
    for(auto i : ans) cout<<i<<" ";
    

    return 0;
}