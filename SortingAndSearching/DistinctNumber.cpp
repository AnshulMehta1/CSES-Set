//  Restaurant Customers
// Author: Anshul Mehta
// A sequence is given and then need to find out the Distinct/Unique items 
#include <iostream>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll n;
    cin>>n;
    set<int> s;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);

    }
    cout << s.size() ;
}
