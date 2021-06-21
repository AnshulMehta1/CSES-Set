// Minimizing Coins
// Author : Anshul Mehta
// Construct the Sum using minimal number of coins 
// Dynamic Problem beacuse of the input 
// Input is n and W - Constraints 
// Where n is the number of different items available and W is the constraint
//  Second Line input is c1...cn which are different types of coins available // Weigths che e items na 
#include <bits/stdc++.h>
#define ar array
#define ll long long 
using namespace std;
int main(){
    ll n,W;
    int a=1e6;
    int max=100;
    int c[max];
    ll dp[a+1];
    cin>>n>>W;
    for (int i=0;i<n;i++){
        cin>>c[i];
    }
    for (int i=1;i<=W;i++){
        dp[i]=1e9;
        for (int j=0;j<n;j++){
            if (c[j]<=i){
                dp[i]=min(dp[i],dp[i-c[j]]+1);
            }
        }

}
    if (dp[W]>=1e9){
        cout<<-1;
    }
    else {
         cout<<dp[W];
    }
   
}
