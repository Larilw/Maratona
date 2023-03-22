#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, valor, pesol = 0, pesoc = 0, maior = 0;
    cin >> n;
    int m[n][n];
    vector<int> pesolinha, pesocoluna(n,0);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> valor;
            m[i][j] = valor;
            pesol += valor;
            pesocoluna[j] += valor;
        }
        pesolinha.push_back(pesol);
        pesol = 0;

    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            m[i][j] = pesolinha[i] + pesocoluna[j] - (2*m[i][j]);
            if(m[i][j] > maior) maior = m[i][j];
        }
    }
    cout << maior << endl;
}