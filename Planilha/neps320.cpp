#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int n, b, valor;
    cin >> n >> b;
    while(n > 0 && b > 0){
        vector<int> resultado(n+1, 0);
        vector<int> v;
        vector<int> compare(n+1, 1);
        for(int i=0; i<b; i++){
            cin >> valor;
            v.push_back(valor);
            for(int j=0; j<v.size(); j++){
                resultado[abs(valor - v[j])] = 1;
            }
        }
        if(resultado == compare) cout << "Y" << endl;
        else cout << "N" << endl;
        cin >> n >> b;
        v.empty();
        resultado.empty();
    }
    return 0;
}