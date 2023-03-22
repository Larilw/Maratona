#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, valor, anterior = 0;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> valor;
        v.push_back(valor);
        if(valor != 0){
            if(anterior == 0){
                v[i] = 1;
                anterior = v[i];
            } 
            else{
                v[i-1]++;
                v[i] = 1;
                anterior = v[i];
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}