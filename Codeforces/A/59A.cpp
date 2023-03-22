#include <iostream>
using namespace std;

int main(){
    int nupper=0, nlower=0;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 65 && s[i] <= 90) nupper++;
        else nlower++;
    }
    if(nupper > nlower){
        for(int i=0; i<s.length(); i++){
            s[i] = toupper(s[i]);
        }
    }
    else{
        for(int i=0; i<s.length(); i++){
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}   