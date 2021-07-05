//  Maximum Sub Array Sum
// Author : Anshul Mehta
// Given A String of n integers we need to find the sum of Maximum Sub Array 
//  The Numbers can be negative as well therefore we'll initialize the answer clode to -infin
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define arr Array
int main(){
    const int mx=2e5;
    ll n;
    cin>>n;
    ll ans=-1e5;
    ll inter=-1e5;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        //  Taking Inputs for all the Numbers
        inter=max(0ll+x,inter+x);
        ans=max(ans,inter);
        // Updating 


    }
    cout<<ans;
}