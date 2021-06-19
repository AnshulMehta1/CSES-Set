// Dice Combinations
// Author:Anshul Mehta
// Dynamic Programming 
//  Task is to count the number of ways to build the sum by throwing die one or more times


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array;

const int maxm=1e6;
const int M=1e9+7;
int n;
ll dp[maxm+1];
int main(){
   
    cin>>n;
    dp[0]=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=min(i,6);j++){
            dp[i]=(dp[i]+dp[i-j])%M;
        }
    }
    cout<<dp[n];



}
