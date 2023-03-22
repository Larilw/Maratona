#include <iostream>
#include <vector>
using namespace std;

int main(){
    int faixas, ogros, forca, criterio, premio;
    vector<int> avaliacao;
    vector<int> premios;
    cin >> faixas >> ogros;
    for(int i=0; i<faixas-1 ; i++){
        cin >> criterio;
        avaliacao.push_back(criterio);
    }
    for(int i=0; i<faixas; i++){
        cin >> premio;
        premios.push_back(premio);
    }
    for(int i=0; i<ogros ; i++){
        cin >> forca;
        if(forca < avaliacao[0]) {
            cout << premios[0] << " ";
        }
        else if(forca > avaliacao.back()){
            cout << premios.back() << " ";
        } 
        else{
            for(int i=1; i<faixas-1; i++){
                if(forca >= avaliacao[i-1] && forca < avaliacao[i]){
                    cout << premios[i] << " ";
                }
            }
        }
    }
    cout << endl;
    return 0;
}