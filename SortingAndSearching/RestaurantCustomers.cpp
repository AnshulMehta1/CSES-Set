// Restaurant Customers
// Author : Anshul Mehta
// Arrival and Departures of n Customers are give and what are the maximum number of Customers that can be accomodated
// Strategy: Greedy Algorithm
//  Sort accordingly to increasing departures
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define arr array
const int mx=2e5;
int main(){
    ll n;
    cin>>n;
    set<arr<int,2>> s;
    for (int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        s.insert({2*a,1});
        s.insert({2*b+1,-1});

    }
    int ans=0;
    int c=0;
    for (arr<int,2>a:s){
        c=c+a[1];
        ans=max(c,ans);
    }
    cout<<ans<<endl;
}

