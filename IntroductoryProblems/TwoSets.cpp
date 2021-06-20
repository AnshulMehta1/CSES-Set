//  Twoo sets
// Auhtor : Anshul Mehta
//  Divide the sets from 1 to .. n in two sets of equal sum values
//  The input is just the number n
// They can be of equal or unequal sizes depending on odd or even
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    //  If the sum is odd then the numbers cannot be split into two sets 
    if ((n*(n+1)/2)%2){
        // If true 
        cout<<"NO";
        return 0;

    }
    // For the case of even sum we need to take two considerations
    vector<int> v1,v2;
    int j=0;
    if (n%4){
        j=3;
    }
    else {
        j=4;
    }
    for (int i=0;i<(n-1)/4;i++){
        v1.push_back(4*i+1+j);
        v2.push_back(4*i+2+j);
        v2.push_back(4*i+3+j);
        v1.push_back(4*i+4+j);
    }
    //  This means 1st and fourth and 2nd and 3rd are added to get an equal sum in the vectors

    if (n%4){
        //  for the case of 3, 1 and 2 are in one vector and 3 is in the other
        v1.push_back(1);
        v2.push_back(3);
        v1.push_back(2);
    }
    else {
        v1.push_back(1);
        v2.push_back(2);
        v2.push_back(3);
        v1.push_back(4);
//  Case of 4
    }

    cout<<"YES"<<"\n";
    cout<<v1.size()<<"\n";
    for (int a:v1){
        cout<<a<<" ";
    }
    cout<<"\n";
    cout<<v2.size()<<"\n";
    for (int b:v2){
        cout<<b<<" ";
    }





}