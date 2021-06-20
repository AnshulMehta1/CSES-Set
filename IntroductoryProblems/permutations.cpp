//  Permutations
//  Author: Anshul Mehta
//  A permutation is called beautiful when no two adjacent numbers have diff 1
// Input:
// 5
//  Print anybeautiful solution
// Output:
// 4 2 5 3 1
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int n;
    cin>>n;
    if (n==1){
        cout<<1;
        return 0;

    }
    if (n==2| n==3){
        cout << "NO SOLUTION";
        return 0;
    }
    //  Now we code for two cases of n being even and odd 
    // Eve
    if (n%2==0){
         for (int i=2;i<=n;i+=2){
            cout << i << " ";
        }
        for (int i=1;i<=n;i+=2){
            cout << i << " ";
        }
        
//  Prinitng the Solution

    }
    //  Odd
    else {
        for (int i=n-1;i>0;i-=2){
            cout << i << " ";
        }
         for (int i=n;i>0;i-=2){
            cout << i << " ";
        }

//  Prinitng the Solution
    }
}