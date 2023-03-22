#include <iostream>
using namespace std;

int main(){
    int n, tamanho, pares = 0;
    char pe;
    int m[31][2];
    for(int i=0; i<31; i++){
        m[i][0] = 0;
        m[i][1] = 0;
    }
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> tamanho >> pe;
        if(pe == 'D') m[tamanho-30][1]++;  
        else m[tamanho-30][0]++;
    }
    for(int i=0; i<31; i++){
        while(m[i][0] > 0 && m[i][1] > 0){
            pares++;
            m[i][0]--;
            m[i][1]--;
        }
    }
    cout << pares << endl;
    return 0;
}