//  Repetitions
// Author: Anshul Mehta
// A,C,G,T sequencing, find the longest commom repetition in the sequence seque

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    string seq;
    cin>>seq;
    int ans=0;
    int count=0;
    char curr='A';
    for (char s:seq){
        if (s==curr){
            count++;
            ans=max(ans,count);
        } 
        else {
            curr=s;
            count=1;
            // Assigning the input to the current character so it's sequence will be counted from then 
        }       

    }
    cout<< ans;

}
