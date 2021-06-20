// Missing Number
// Author : Anshul Mehta
//  Task is to find the missing number 
// 1st Ip is n and Second Ip is list of numbers that have 1...n with one missing 
//  FInd the missing Number  here a
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
//  Ints are generally failing some test Cases.
int main(){
    ll n,sum=0;
    
    cin >> n;
    for (int i=1;i<n;i++){
        // Take an arbitrary var to cin 
        int j;
        cin >>j;
        sum+=j;
        //  Sum of the lists of with Missing Number

    }
    cout << n*(n+1)/2-sum;
    //  Which is basically summing up all numbers from 1 to n and subtracting the sum that has the missing number

}