#include<iostream>

using namespace std;

int main() {
    int A,B,C;
    cin>>A>>B>>C;

    string y = "YES";
    string n = "NO";

    if(A == B || B == C || A == C) cout<<y<<"\n";
    else cout<<n<<"\n";

    return 0;
}