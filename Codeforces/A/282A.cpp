#include <iostream>

using namespace std;

int main(){
    int n, x = 0;
    string s;
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> s;
        if(s.compare("++X") == 0 || s.compare("X++") == 0){
            x++;
        }
        if(s.compare("--X") == 0 || s.compare("X--") == 0){
            x--;
        }
    }
    cout << x << endl;
    return 0;
}