#include <iostream>
using namespace std;

int main(){
    int n, entrada, saida, capacidade = 0, ocupacaoMax = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> saida >> entrada;
        capacidade -= saida;
        capacidade += entrada;
        if(capacidade > ocupacaoMax) ocupacaoMax = capacidade;
    }
    cout << ocupacaoMax << endl;
    return 0;
}