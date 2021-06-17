// Weird Algortihm 
// Author : Anshul Mehta
//  n- even --> divide by 2
//  n odd --> *3 + 1
//  Do this till the number is unity
//  Test Case: n=3 --> 3→10→5→16→8→4→2→1
#define ll long long 
#include <bits/stdc++.h>
using namespace std;
int main() {
    ll n;
    cin >> n;
    cout <<n;
    while (n!=1){
        if(n%2==0){
            n=n/2;

        }
        else{
            n=n*3+1;

        }
        cout<<" "<< n; 
    }
    
}
 