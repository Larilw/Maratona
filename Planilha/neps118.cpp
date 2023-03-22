#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, novas = "", novasreverso = "";
    cin >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            novas += s[i];
        }
    }
    novasreverso = novas; 
    reverse(novasreverso.begin(), novasreverso.end());
    if(novas == novasreverso) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}