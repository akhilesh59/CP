#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,minInd,maxInd,cnt=0;
    cin>>n;

    vector<int> v(n);

    for(auto &i : v) cin>>i;

    int mini = *min_element(v.begin(),v.end());
    int maxi = *max_element(v.begin(),v.end());

    for(int i=0; i<n; i++) {
        if(v[i] == maxi) {
            maxInd = i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--) {
        if(v[i] == mini) {
            minInd = i;
            break;
        }
    }

    if(minInd < maxInd) cnt = maxInd + (n - minInd - 1) - 1;
    else cnt = maxInd + (n - minInd - 1);

    cout<<cnt<<"\n";  

    return 0;
}