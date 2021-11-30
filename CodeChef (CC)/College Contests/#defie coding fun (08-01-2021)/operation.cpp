#include<bits/stdc++.h>

/* 
Chef has challenged you to find the minimum number of operations he needs to use to make n equals to x.

There are two operations given below:

1.) subtract any positive integer from n.

2.) Multiple n with any positive integer.

Input Format:

First-line contains t the number of test cases.

For each test case, you are given two space separated integers n and x.

Output Format:

Print minimum operations you need to make n equal to x.

Constraints:

1 <= t <= 50

1 <= n,x <= 1000

Sample Input

2

4 8

3 3

Sample Output

1

0 */

using namespace std;

#define ll long long

int main() {
    ll t; 
    cin>>t;

    while(t--) {
        ll count = 0, n,x, fact = 1, diff = 0;
        cin>>n>>x;

        if(n == x) {
            cout<<"0"<<endl;
            continue;
        }

        while(n!=x) {
            if(x%n == 0) {
                count++;
                break;
            }

            fact = x/n;
            if(n<x) {
                if(n*fact != x) {
                    fact = fact+1;
                    n = n*fact;
                    count++;
                }
            }

            else {
                diff = n - x;
                n = n - diff;
                count++;
            }
            

        }

        cout<<count<<endl;
    }

    return 0;
}