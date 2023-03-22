#include <iostream>
#include <vector>
using namespace std;

int main(){
    bool win = true;
    int n;
    char entrada;
    vector<int> tempos(10,0);
    cin >> n;
    for(int i=0; i<16; i++){
        cin >> entrada;
        if(entrada != '.'){
            tempos[int(entrada)-48]++;
            if(tempos[int(entrada)-48] > n*2) win = false;
        }
    }
    if(win) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}