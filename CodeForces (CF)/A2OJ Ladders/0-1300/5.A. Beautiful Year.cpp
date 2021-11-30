#include<iostream>
using namespace std;
 
int main() {
    int n;
    int ans;
    int arr[10] = {0};
    cin>>n;

    for(int i=n+1; ; i++) {
        int t = i;
        int d1,d2,d3,d4;
        d1 = t%10; t/=10;
        d2 = t%10; t/=10;
        d3 = t%10; t/=10;
        d4 = t%10; t/=10;
        
        if(d1 != d2 and d2 != d3 and d3 != d4 and d4 != d1 and d1 != d3 and d2 != d4) {
            ans = i;
            break;
        }
    }

    cout<<ans<<endl;

    return 0;
}