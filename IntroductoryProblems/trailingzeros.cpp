// trailing zeros
// Author : Anshul Mehta
//  Find the Number of trailing zeros in n! 

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll ans;
    //  The approach is to count number of exponentials of 2 and 5 in Prime Factors
    //  Because 2*5 is going to cause the zeros 
    //  Then the smaller of them will be the number of trailing zeroes
    for (ll i=5;i<=n;i*=5){
        ans+=n/i;
    }
    cout<<ans;
}
   
