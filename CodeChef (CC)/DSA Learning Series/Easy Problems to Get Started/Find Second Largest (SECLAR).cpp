#include<bits/stdc++.h>
using namespace std;

int main() {

    priority_queue<int> pq;
    int a,b,c; 
    cin >> a >> b >> c;
    pq.push(a);
    pq.push(b);
    pq.push(c);

    pq.pop();

    cout<<pq.top();

    

    return 0;
}