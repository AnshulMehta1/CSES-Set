// Sum of Two Values
// Author : Anshul Mehta
//  n Values are given and we need to find the two distinct positions whose sum is x
#include <bits/stdc++.h>
#include <iostream>
#define ll long long 
#define arr array
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    map<int,int> mp;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        if (mp.find(x-a)!=mp.end()){
            cout<<mp[x-a]+1<<" "<<i+1;
            return ;
        }
        mp[a]=i;
    }
    cout<<"IMPOSSIBLE";
}
