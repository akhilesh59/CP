#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>

int main() {
    ll t;   
    cin >> t;

    while (t--) {
        ll N,M,N_sum = 0,M_sum=0,ans = 0;
        ll tn,tm;
        ll x;
        bool if_printed = false;
        cin>>N>>M;
        vector<ll> vn(N);
        vector<ll> vm(M);

        for(ll i = 0; i < N; i++) {
            ll temp;
            cin>>temp;
            N_sum = N_sum + temp;
            vn[i] = temp;
        }

        for(ll i = 0; i < M; i++) {
            ll temp;
            cin>>temp;
            M_sum = M_sum + temp;
            vm[i] = temp;
        }

        if(N_sum > M_sum) {
            cout<<ans<<endl;
            continue;
        }
        else{
            sort(vn.begin(),vn.end());
            sort(vm.begin(),vm.end(), greater<ll>());

            x = min(N,M);

            for(ll i=0; i<x; i++) {
                tn = vn[i];
                tm = vm[i];
                ans++;
                N_sum = N_sum - tn + tm;
                M_sum = M_sum - tm + tn;

                if(N_sum > M_sum) {
                    cout<<ans<<endl;
                    if_printed = true;
                    break;
                }
                
            }
        }

        if(if_printed == false) cout<<-1<<endl;
        
    }

    return 0;
}

/* Problem:
    Elections are coming soon. This year, two candidates passed to the final stage. One candidate is John Jackson and his opponent is Jack Johnson. During the elections, everyone can vote for their favourite candidate, but no one can vote for both candidates. Then, packs of votes which went to the same candidate are formed. You know that for John Jackson, there are N packs containing A1,A2,…,An votes, and for Jack Johnson, there are M packs containing B1,B2,…,Bm votes.

    The winner is the candidate that has strictly more votes than the other candidate; if both have the same number of votes, there is no winner. You are a friend of John Jackson and you want to help him win. To do that, you may perform the following operation any number of times (including zero): choose two packs of votes that currently belong to different candidates and swap them, i.e. change the votes in each of these packs so that they would go to the other candidate.

    You are very careful, so you want to perform as few swaps as possible. Find the smallest number of operations you need to perform or determine that it is impossible to make John Jackson win.
Input

    The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains two space-separated integers N and M.
    The second line contains N space-separated integers A1,A2,…,An.
    The third line contains M space-separated integers B1,B2,…,Bm.

Output

    For each test case, print a single line containing one integer ― the smallest number of swaps needed to make John Jackson win, or −1 if it is impossible.

Constraints:
    1≤T≤103
    1≤N,M≤103
    1≤Ai≤106 for each valid i
    1≤Bi≤106 for each valid i
    the sum of N over all test cases does not exceed 104
    the sum of M over all test cases does not exceed 104
 */