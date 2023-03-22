#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int zeros=0, ums=0;
    if(s.find("0000000") >= 0 && s.find("0000000") <= s.length()) cout << "YES" << endl;
    else if(s.find("1111111") && s.find("1111111") <= s.length()) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

ERRADO