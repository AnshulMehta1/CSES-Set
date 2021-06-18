// Number Spiral 
//  Author : Anshul Mehta
// Task is to find the number in the column x and row y
// Two Inputs , first t and then t lines with row y and column x whose correpsonding number is to be find

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    for (int i=t;i>0;i--){
        ll y,x;
        cin>>y>>x;
        //  Now checkk which of the row or column is bigger 
        ll z=max(y,x);
        // Which means row is bigger
        if (z==y){
            ll ans ;
            if (z%2!=0){
                ans =(y*y)-x+1;
            }
            else {
                ans =((y-1)*(y-1))+x;
            }
            cout<<ans<<"\n";

        }
        // Means that the Column is Bigger 
        else {
            ll ans ;
            if (z%2!=0){
                ans =((x-1)*(x-1))+y;
            }
            else {
                ans = (x*x)-y+1;
            }
             cout<<ans<<"\n";
        }
       
    }

}