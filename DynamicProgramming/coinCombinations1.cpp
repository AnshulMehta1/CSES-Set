// Coin Combinations
// Author : Anshul Mehta
//  A list of items is given with their weights and a Target Constraint is given as well
//  We need to find the number of ways we can reachh the target 
//  Input n,W --> Number of Items and Weight constraint
//  Second Line is the value of the coins 
#include <bits/stdc++.h>
#define ar array
#define ll long long 
using namespace std;
int main(){
    ll n;
    ll W;
    cin>>n>>W;
    int max=100;
    int c[max];
    int mod=1e9+7;
    int dp[n+1][W+1];
    for (int i=0;i<n;i++){
        cin>>c[i];
    }


    // Dynamic Programming 
    for (int i=1;i<=n;i++){
        for (int j=0;j<=W;j++){
            if (j==0){
                dp[i][j]=1;
            }
            else{
                int a=(c[i]>j)?0:dp[i][j-c[i]];
                int b=(i==1)?0:dp[i-1][j];
                // dp[i][j]=(dp[i][j-c[i]]+dp[i-1][j])%mod;
                dp[i][j]=(a+b)%mod;

            }
        }
       

}

        cout<<dp[n][W];
        
    


}
