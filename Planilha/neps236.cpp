#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, valor, somaLinha, somaColuna, somaDiagonal1 = 0, somaDiagonal2 = 0;
    set<int> sLinha, sColuna, sDiagonal;
    cin >> n;
    int m[n][n];
    for(int i=0; i<n; i++){
        somaLinha = 0;
        for(int j=0; j<n; j++){
            cin >> valor;
            m[i][j] = valor;
            somaLinha += valor;
        }
        sLinha.emplace(somaLinha);
    }
    if(sLinha.size() > 1){
        cout << -1 << endl;
        return 0;
    }
    for(int j=0; j<n ; j++){
        somaColuna = 0;
        for(int i=0; i<n; i++){
            somaColuna += m[i][j];
        }
        sColuna.emplace(somaColuna);
    }
    if(sColuna.size() > 1){
        cout << -1 << endl;
        return 0;
    }
    for(int i=0 ; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                somaDiagonal1 += m[i][j];
            }
            if((i+j)==(n-1)){
                somaDiagonal2 += m[i][j];
            }
        }
    }
    if(somaDiagonal1 == somaDiagonal2){
        if(sColuna.find(somaDiagonal1) != sColuna.end() && sLinha.find(somaDiagonal1) != sLinha.end()){
            cout << somaDiagonal1 << endl;
        }
        else cout << -1 << endl;
    }
    else{
        cout << -1 << endl;
    } 
    return 0;
}