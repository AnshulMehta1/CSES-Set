// Increasing array 
// Author: Anshul Mehta
//  On each move incrase any elemnent by 1
// Number of moves required
// Number 5
// Array 3 2 5 1 7
// So One move for making 2--> 3  and 4 moves for maing 1-->5
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int n;
    cin >>n;
    int mx=0;
    ll ans=0;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        mx=max(a,mx);
        ans=ans+mx-a;

    }
    cout<<ans;
}