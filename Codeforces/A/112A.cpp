#include <iostream>

using namespace std;

int main(){
    bool dif = false;
    int value_s1 = 0, value_s2 = 0;
    string s1, s2;
    int iguais = 0;
    cin >> s1 >> s2;
    for(int i=0; i < s1.length(); i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
        value_s1 += s1[i];
        value_s2 += s2[i];
    }
    cout << s1.compare(s2) << endl;
    return 0;
}