// Ferris Wheel 
// Author : Anshul Mehta
//  There are n children and we need to find gondola for each of them
// Each G can have 1/2 childen and weight must not exceed x
// 1st Line IP: n and x 
// Second Line Input : Weight of each child p
#include <bits/stdc++.h>
#include <iostream>
#define ll long long 
#define arr array
using namespace std;
const int mx=2e5;
int p[mx];
int main(){
    ll n,x;
    cin>>x>>n;
    for (int i=0;i<n;i++){
        cin>>p[i];
    }
    sort (p,p+n);
    int ans=0;
    for (int i=0,j=n-1;i<j;){
        while (i<j&&p[i]+p[j]>x){
            j--;
        }
        if (i>=j){
            break;
        }
        ans++;
        i++,j--;


    }
    cout<<n-ans;
}
