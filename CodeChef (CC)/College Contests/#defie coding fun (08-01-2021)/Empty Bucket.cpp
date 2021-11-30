#include<bits/stdc++.h>

/*

 Chef has two buckets containing a and b litres of water. Chef wants to empty both buckets. To do that, he may perform the following operation any number of times (possibly zero): in each operation, he can either remove one litre from the first bucket and two litres from the second bucket, or two litres from the first bucket and one litre from the second bucket.

Chef asks you whether it is possible to empty both buckets.

Input

The first input line has an integer t: the number of tests.

After this, there are t lines, each of which has two integers a and b the amount of water in buckets.

Output

For each test, print "YES" if it is possible to empty both buckets and "NO" otherwise.

Constraints

• 1 ≤ t ≤ 10^5

• 0 ≤ a,b ≤ 10^9

Example

Input:

3

8 9

3 3

10 15

Output:

NO

YES

NO

 */

using namespace std;

#define ll long long

int main() {
    ll t; 
    cin>>t;

    while(t--) {
        ll count = 0, a, b;
        cin>>a>>b;
        bool check = false;

        if(a%2 == 0 && b%2 == 0 && a%3 == 0 && b%3 == 0) check = true;
        else if(a%2 != 0 && b%2 != 0 && a%3 == 0 && b%3 == 0) check = true;

        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}