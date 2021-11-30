#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;

    for(int r=0; r<=n; r++) {
        for(int c=0; c<=2*n; c++) {
            if(c <= n) {
                int x = n-r-c;
                if(x<=0 && r>0) {
                    cout<<abs(x)<<" ";
                }
                else if(x==0 && r == 0) cout<<x;
                else cout<<"  ";
            }
            else if(c > n) {
                if(n+r-c > 0) cout<<(n+r-c)<<" ";
                else if(n+r-c == 0) cout<<(n+r-c);
            }
        }
        cout<<"\n";
    }

    for(int r=n-1; r>=0; r--) {
        for(int c=0; c<=2*n; c++) {
            if(c <= n) {
                int x = n-r-c;
                if(x<=0 && r > 0) {
                    cout<<abs(x)<<" ";
                }
                else if(x==0 && r==0) cout<<x;
                else cout<<"  ";
            }
            else if(c > n) {
                if(n+r-c > 0) cout<<(n+r-c)<<" ";
                else if(n+r-c == 0) cout<<(n+r-c);
            }
        }
        cout<<"\n";
    }

    return 0;
}