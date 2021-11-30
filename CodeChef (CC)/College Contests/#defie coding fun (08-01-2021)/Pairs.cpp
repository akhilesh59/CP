#include<bits/stdc++.h>

/* The chef knows very well that in maximum cases a * b >= a+b but not in every case so he wonders how many different pairs he can make from n given numbers such that ai * aj < ai+aj.
As the chef is not good in mathematics so he asked you to help him to find the number of pairs he can make.

Input Format:

First line contains t the number of test cases

For each test case, you are given one Integer n the size of the array.

Next line contain n space separated integers (a1,a2,a3…….an).

Output Format

For each test cases print the number of pair which satisfy the above condition.

Constraints:

1 <= t <= 50

1 <= n<= 200000

0 <= ai <= 10^9

The sum of n over all test cases does not exceed 200000.

Sample Input

2

1

64

5

1 56 0 0 65

Sample Output

0

8

Explanation of test case 2 : pairs are {[1,56] , [1,0] , [1,0] , [1,65] , [56,0] , [56,0] , [65,0] , [65,0]}
 */

using namespace std;

#define ll long long
#define vl vector<long long>

int main() {
    ll t; 
    cin>>t;

    while(t--) {
        ll n, count=0;
        cin>>n;
        vl arr(n);

        for(auto &i : arr) cin>>i;

        for(ll i=0; i<n; i++) {
            if(arr[i] == 0 || arr[i] == 1) {
                for(ll j=i+1; j<n; j++) {
                if((arr[i] + arr[j]) > (arr[i] * arr[j])) count++;
                }
            }
        }

        cout<<count<<endl;

        
    }

    return 0;
}