// Palindrome Reorder
//  Author : Anshul Mehta
//  Reaarange the given String into a Palindrome
#include <bits/stdc++.h>
using namespace std;
#define arr array

int main() {
    string s;
    cin >> s;

    vector<int> a(26);
    for(char ch : s){
        a[ch - 'A']++;
    } 
    
    int chk = 0;
    for(int i = 0; i < 26; i++) chk += (a[i] % 2);
    //Check for Number of Odds and 
    if(chk > 1){
        cout << "NO SOLUTION";
        return 0;
    }
    //Arranging the String and Building the Palindrome
    string res;
    
    for (int i = 0; i < 26; i++){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) res.push_back(i + 'A');
        }
    }
    for (int i = 0; i < 26; i++){
        if(a[i]%2){
            for(int j = 0; j < a[i]; j++) res.push_back(i + 'A');
        }
    }
    for (int i = 25; i >= 0; i--){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) res.push_back(i + 'A');
        }
    }

    cout << res << endl;
    return 0;
}
