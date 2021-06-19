// Bit Strings
//  Author : Anshul Mehta
// Your task is to calculate the number of bit strings of length n.
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll num=1;
    // Print the result modulo 10^9+7.
    for (int i=0; i<n;i++){
        num=2*num%((int )1e9+7);
    }
    cout<<num;


}