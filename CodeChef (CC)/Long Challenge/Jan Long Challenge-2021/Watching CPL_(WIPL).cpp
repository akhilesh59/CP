#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<long long>

int main() {
    ll t;
    cin>>t;

    while(t--) {
        ll N, K, tmpSum=0, sum1=0, sum2=0, count=0, j=0;
        cin>>N>>K;
        vl hv(N+1);

        for(ll i=0; i<N; i++) {
            cin>>hv[i];
            tmpSum += hv[i];
        }

        if(tmpSum<(2*K)) {
            cout<<"-1"<<endl;
            continue;
        }
        else {
            sort(hv.begin(),hv.end(),greater<ll>());

            while(((sum1<K) || (sum2<K)) && j<N) {
                if(sum1<K) {
                    sum1 += hv[j];
                    count++;
                    j++;
                }
                if(sum2<K) {
                    sum2 += hv[j];
                    count++;
                    j++;
                }
                
            }

            if((sum1>=K) && (sum2>=K)){
            cout<<count<<endl;
            }
            else {
                cout<<"-1"<<"\n";
            }
        }
        
    }

    return 0;
}