// Tower of Hanoi
// Author: Anshul Mehta
// Move the Disks from one stack to another using a middle stack 
// This is a recursice approach
// Because after every disk is shifted we basically solve the same Problem again and again 
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long 
#define arr array 

//  Method for Tower of Hanoi
void towerHanoi(int n,int source, int dest, int aux){
    if (n == 1){
        cout <<source<<' '<<dest <<endl;
        return;
    }
    towerHanoi(n-1,source,aux,dest);
    cout <<source<<' '<<dest<<endl;
    towerHanoi(n-1,aux,dest,source);
}
//  Main Method 
int main(){
    int n;
    cin >> n;
    // number of Moves is 2^n-1 
    cout<<pow(2,n)-1<<"\n";
    towerHanoi(n,1,3,2);
    return 0;
}