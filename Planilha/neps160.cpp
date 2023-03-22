#include <iostream>
using namespace std;

int main(){
    int n, acertos = 0;
    string resposta, gabarito;
    cin >> n;
    cin >> gabarito >> resposta;
    for(int i=0; i<n; i++){
        if(gabarito[i] == resposta[i]) acertos++;
    }
    cout << acertos << endl;
    return 0;
}