#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'){
            s.erase(i,1);
            i--;
        }
    }
    for(int i=0; i<s.length(); i++){
        cout << "." << s[i];
    }
    cout << endl;
    return 0;
}