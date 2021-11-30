    #include<bits/stdc++.h>
    using namespace std;
     
    int main() {
        int a1,a2,a3; cin>>a1>>a2>>a3;
        int l,b,h;
        
        h = sqrt((a2*a3)/a1);
        b = sqrt((a2*a1)/a3);
        l = sqrt((a1*a3)/a2);
        
        cout<<4*(l+b+h)<<"\n";
     
        return 0;
    }