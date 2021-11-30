#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define vl vector<ll>
#define vc vector<char>

int main() {
    ll t,n;
    cin>>t;

    while(t--) {
        ll t=0,m=0,count = 0, flag = 1;
        vc v;
        char c;
        cin>>n;
        
        for(ll i=0; i<n; i++) {
            cin>>c;
            if(c == 'T') t++;
            else m++;
            v.pb(c);
        }

        if(t == 2*m) {
            if(v[0] == 'M' || v[n-1] == 'M') {
                cout<<"NO"<<"\n";
                flag = 0;
            }
            
            if(flag) {
                for(ll i =0; i<n; i++) {
                    if(v[i] == 'T') count++;
                    else count--;
                        if(count < 0) {
                            flag = 0;
                            cout<<"NO"<<"\n";
                            break;
                        } 
                }
            }

            count = 0;

            reverse(v.begin(),v.end());

            if(flag) {
                for(ll i =0; i<n; i++) {
                    if(v[i] == 'T') count++;
                    else count--;
                    if(count < 0) {
                        flag = 0;
                        cout<<"NO"<<"\n";
                        break;
                    } 
                }
            }

            if(flag) cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }
    
    }


    return 0;
}

/* 

Question: 

                                            B. TMT Document
                                            time limit per test
                                            1 second
                                            memory limit per test
                                            256 megabytes
                                            input
                                            standard input
                                            output
                                            standard output

The student council has a shared document file. Every day, some members of the student council write the sequence TMT (short for Towa Maji Tenshi) in it.

However, one day, the members somehow entered the sequence into the document at the same time, creating a jumbled mess. Therefore, it is Suguru Doujima's task to figure out whether the document has malfunctioned. Specifically, he is given a string of length n

whose characters are all either T or M, and he wants to figure out if it is possible to partition it into some number of disjoint subsequences, all of which are equal to TMT. That is, each character of the string should belong to exactly one of the subsequences.

A string a
is a subsequence of a string b if a can be obtained from b

by deletion of several (possibly, zero) characters.
Input

The first line contains an integer t(1≤t≤5000)  — the number of test cases.

The first line of each test case contains an integer n
(3≤n<105), the number of characters in the string entered in the document. It is guaranteed that n is divisible by 3.

The second line of each test case contains a string of length n consisting of only the characters T and M.

It is guaranteed that the sum of n over all test cases does not exceed 105.

Output

For each test case, print a single line containing YES if the described partition exists, and a single line containing NO otherwise.
Example

Input
5
3
TMT
3
MTT
6
TMTMTT
6
TMTTTT
6
TTMMTT

Output

YES
NO
YES
NO
YES

Note

In the first test case, the string itself is already a sequence equal to TMT.

In the third test case, we may partition the string into the subsequences TMTMTT. Both the bolded and the non-bolded subsequences are equal to TMT.

*/