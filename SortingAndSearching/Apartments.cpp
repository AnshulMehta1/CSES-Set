// Apartments
// Auhtor: Anshul Mehta
// There are m apartments and n applicants and the task is to distribute apartemtns so maximum
// Each applicant gets apartment near to their desired size
#include <bits/stdc++.h>
#include <iostream>
#define ll long long 
#define arr array
using namespace std;
const int mx=2e5;
int n,m,k;
// Applicants, Apartments, max difference allowed
int a[mx],b[mx];

int main(){
    cin>>n>>m>>k;
    for (int i=0;i<n;i++){
        cin>>a[i];
        // Desired size of the Apartments

    }
    for (int j=0;j<m;j++){
         cin>>b[j];
        // The size of each of the apartment
    }
    sort(a,a+n);
    sort(b,b+m);
    int ans=0;
    //  Once they are sorted we now need to check if they satisfy the size parameter
    for (int i=0,j=0;i<n;i++){
        while (j<m&&b[j]<=a[i]-k){
            j++;
        if (j<m&&b[j]<=a[i]+k){
            ans++;
            j++;


        }
        }

    }
     cout<<ans;
    
}
