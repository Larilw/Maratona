#include <iostream>
using namespace std;

int main(){
    int n, resultado = 0;
    char atual = 'a', anterior;
    cin >> n;
    for(int i=0; i<n; i++){
        anterior = atual;
        cin >> atual;
        if(anterior != 'a'){
            if(atual == anterior) resultado++;
        }
    }
    cout << resultado << endl;
    return 0;
}