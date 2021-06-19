// Coin Piles
// Author: Anshul Mehta
//  Either remover one coin from a and two from b or two from a and one from b 
//  Check if there's and efficient way to empty both the coin piles
#include <bits/stdc++.h>
#define ll long long ;
using namespace std;
int main(){
     int t;
    cin>>t;
    while (t--){
        int a,b;
        //  Inittializing the Pile
        cin>>a>>b;
        cout<<((a+b)%3==0 && 2*a>=b && 2*b>=a ? "YES":"NO")<<"\n";
        

    }

}
