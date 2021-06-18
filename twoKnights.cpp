// Two Knights
//  Author: Anshul Mehta
//  The knights have to be placed on a 1x1 to kxk cross board without them mutually attacking each other

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        ll ans;
        ll skip=(i*i)*((i*i)-1)/2;
        if (i==1){
            cout<<0<<"\n";
        }
        // if (i==2){
        //     // They can be place in Nc2 combinations = 4c2
        //     cout<<6<<"\n";
        // }
        //  now for others there are n^2 squares and the knights cannot mutually attack each other
        else {
            skip=skip-4*(i-1)*(i-2);
            cout<<skip<<"\n";
        }

    }



}