    #include<bits/stdc++.h>
    using namespace std;
     
    int main() {
        string s; cin >> s;
        int h=0,e=0,l=0,o=0;
        if(s.length() < 5) {
            cout<<"NO"<<"\n";
            return 0;
        }
        else if(s.length() == 5) {
            if(s == "hello") cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
            return 0;
        }
        else {
            for(int i=0; i<s.length(); i++) {
                if(s[i] == 'h') h++;
                if(s[i] == 'e' && h>0) e++;
                if(s[i] == 'l' && h>0 && e>0) l++;
                if(s[i] == 'o' && h>0 && e>0 && l>1) o++;
            }
     
            if(h>=1 && e>=1 && l>=2 && o>=1) {
                cout<<"YES"<<"\n";
            }
            else cout<<"NO"<<"\n";
        }
     
     
     
        return 0;
    }