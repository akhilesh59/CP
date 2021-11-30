#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

int main() {
    ll t;   
    cin >> t;

    char arr[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};

    while (t--) {
        ll N,counter=1,fact=8,start=0,end=15;
        cin>>N;
        string s;
        cin>>s;
        string ans = "";

        for(ll i=0; i<N;i++) {
            if(counter <= 4) {
                if (counter == 1) fact = 8;
                else if(counter == 2) fact = 4;
                else if(counter == 3) fact = 2;
                else if(counter == 4) fact = 1;

                if(s[i] == '0') {
                    end -= fact;
                }
                else if(s[i] == '1') {
                    start += fact;
                }

                if(counter == 4) {
                    ans += arr[start];
                }

                counter++;
            }

            if(counter > 4) {
                counter = 1;
                start = 0;
                end = 15;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}