#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int n, value, size, aux = 0;
    double distanciaLanternas = 0, distanciaInicio = 0, distanciaFim = 0;
    vector<int> v;
    cin >> n;
    cin >> size;
    for(int i=0; i<n ; i++){
        cin >> value;
        v.push_back(value);
    }
    sort(v.begin(), v.end());
    distanciaInicio = v[0];
    distanciaFim = abs(v.back() - size);
    for(int i=1; i<n; i++){
        if(distanciaLanternas < (v[i] - v[i-1])/2.0){
            distanciaLanternas = (v[i] - v[i-1])/2.0;
        }
        aux++;
    }
    cout << fixed << setprecision(10);
    if(distanciaFim > distanciaInicio){
        if(distanciaLanternas > distanciaFim) cout << distanciaLanternas << endl;
        else cout << distanciaFim << endl; 
    }
    else{
        if(distanciaLanternas > distanciaInicio) cout << distanciaLanternas << endl;
        else cout << distanciaInicio << endl;
    }
    return 0;
}