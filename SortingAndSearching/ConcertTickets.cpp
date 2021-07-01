// Concert Tickets
// Author:Anshul Mehta
// N tickets and m customers are there
// They announce a price max they can pay and they recieve a nearer tickets 
#include <iostream>
#include <bits/stdc++.h>
#define arr array
#define ll long long 
using namespace std;
ll m,n;
const int mx=2e5;
int main(){
    cin>>n>>m;
    set<arr<int,2>>s;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        s.insert({a,i});

    }

    for (int i=0;i<m;i++){
        int t;
        cin>>t;
        auto it=s.lower_bound({t+1,0});
        if (it==s.begin()){
            cout<<"-1\n";

        }
        else{
            it--;
            cout<< (*it)[0]<<"\n";
            s.erase(it);
        }
    }
}
