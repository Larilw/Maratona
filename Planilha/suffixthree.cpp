#include <iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        if(s.substr(s.length()-2, s.length()) == "po") cout << "FILIPINO" << endl;
        else if(s.substr(s.length()-4, s.length()) == "desu") cout << "JAPANESE" << endl;
        else if(s.substr(s.length()-4, s.length()) == "masu") cout << "JAPANESE" << endl;
        else if(s.substr(s.length()-5, s.length()) == "mnida") cout << "KOREAN" << endl;
    }   
    return 0;
}