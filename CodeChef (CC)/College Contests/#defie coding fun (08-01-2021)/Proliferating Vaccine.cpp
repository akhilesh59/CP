#include<bits/stdc++.h>

/* 
Chef worked in a company that develops vaccines. His company is one of the firsts to pass the clinical trials for the Covid-19 vaccine and has been given the permission of the government to give it to the masses.

Piecity will be one of the first cities to have this clinical trial. The vaccine works in a very effective way which makes it cost-effective too. It passes itself from one person to another itself just like the virus. ( very intuitive…!! )

Chef knows that there are n people in Piecity. Some of them are friends with each other. So the government decides to give it to certain individuals who will then spread it to other people who are their friends. i-th person wants ri rupees in exchange for taking the vaccine. When a person gets the vaccine he passes it on to all his friends, and they start spreading the vaccine to their friends (for free), and so on.

The vaccination of Piecity is finished when all n people have been vaccinated either directly or through their friends. What is the minimum amount of rupees government needs to spend in order to vaccinate the city ?

Input:

The first line contains two integer numbers n and m (1 ≤ n ≤ 10^5, 0 ≤ m ≤ 10^5) where n = population of piecity m = number of pair of friends

The second line contains n integer numbers ri (0 ≤ ri ≤ 10^9) —the amount of rupees i-th person is demanding for taking the vaccine dose.

Then m lines follow, each containing a pair of friends (ai,bi) . where ai is a friend of bi and vice-versa, (ai != bi)

It is guaranteed that each pair is listed at most once.

Output:

In a single line print the minimum amount of money required to vaccinate the whole city.

Example

Input:

6 3

1 3 3 10 9 5

1 4

4 5

4 6

Output:

7
  */

using namespace std;

#define ll long long
#define vl vector<long long>

int main() {
   
        ll n, m, cost = 0;
        cin>>n>>m;
        vl r(n);
        vl idx(n);

        for(ll i=0; i<n; i++) cin>>r[i];

        for(ll i=0; i<n; i++) idx[i] = 0;
        
        for(ll i=0; i<m; i++) {
            ll  x, y, mx, mn;
            cin>>x>>y;
            if(idx[x-1] == 0 && idx[y-1] == 0) {
                    if(r[x-1]>r[y-1]) {
                    mx = x;
                    mn = y;
                }
                else {
                    mx = y;
                    mn = x;
                }

                    idx[mn-1]++;
                    cost += r[mn-1];

                    idx[mx-1]++;
            } 
            if(idx[x-1] > 0 || idx[y-1] > 0) {
                idx[x-1]++;
                idx[y-1]++;
            }
        }

        for(ll i=0; i<n; i++) {
            if(idx[i] == 0) cost += r[i];
        }


        cout<<cost<<endl;


    return 0;
}