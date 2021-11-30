#include<bits/stdc++.h>

/* Problem:

You are playing a Billiards-like game on an N×N table, which has its four corners at the points {(0,0),(0,N),(N,0), and (N,N)}. You start from a coordinate (x,y), (0<x<N,0<y<N) and shoot the ball at an angle 45∘ with the horizontal. On hitting the sides, the ball continues to move with the same velocity and ensuring that the angle of incidence is equal to the angle of reflection with the normal, i.e, it is reflected with zero frictional loss. On hitting either of the four corners, the ball stops there and doesn’t move any further.

Find the coordinates of the point of collision, when the ball hits the sides for the Kth
time. If the ball stops before hitting the sides K times, find the coordinates of the corner point where the ball stopped instead.
Input:

    The first line of the input contains an integer T, the number of testcases.
    Each testcase contains a single line of input, which has four space separated integers - N, K, x, y, denoting the size of the board, the number of collisions to report the answer for, and the starting coordinates.

Output:

    For each testcase, print the coordinates of the ball when it hits the sides for the Kth
    time, or the coordinates of the corner point if it stopped earlier.
    
*/


using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<long long>

int main() {
    ll t;
    cin>>t;

    while(t--) {
        ll N,K,x,y;
        cin>>N>>K>>x>>y;
        
        ll ans_x = -1, ans_y = -1;
        bool check = false;

        if(x == y) {
            cout<<N<<" "<<N<<endl;
            check = true;
            continue;
        }

        if(x>=y) {

            if(K%5 == 0) {
                ans_x = x;
                ans_y = y;
            }
            else if(K%5 == 1) {
                ans_y = y + (N-x);
                ans_x = (N - ((x+1)/2));
            }
            else if(K%5 == 2) {
                ans_y = N;
                ans_x = x;
            }
            else if(K%5 == 3) {
                ans_y = (N-x);
                ans_x = 0;
            }
            else if(K%5 == 4) {
                ans_y = 0;
                ans_x = (N-x);
            }

            if((ans_x == 0 && ans_y == 0) || (ans_x == N && ans_y == N) || (ans_x == 0 && ans_y == N) || (ans_x == N && ans_y == 0)) {
                cout<<ans_x<<" "<<ans_y<<endl;
                check = true;
                break;
            }

        }
        else {

            if(K%5 == 0) {
                ans_x = x;
                ans_y = y;
            }
            else if(K%5 == 1) {
                ans_y = N;
                ans_x = (5 - (y-x));
            }
            else if(K%5 == 2) {
                ans_y = N;
                ans_x = x;
            }
            else if(K%5 == 3) {
                ans_y = (N-x);
                ans_x = 0;
            }
            else if(K%5 == 4) {
                ans_y = y;
                ans_x = x;
            }

            if((ans_x == 0 && ans_y == 0) || (ans_x == N && ans_y == N) || (ans_x == 0 && ans_y == N) || (ans_x == N && ans_y == 0)) {
                cout<<ans_x<<" "<<ans_y<<endl;
                check = true;
            }

        }

        if(check == false) {
            cout<<ans_x<<" "<<ans_y<<endl;
        }
        
    }

    return 0;
}