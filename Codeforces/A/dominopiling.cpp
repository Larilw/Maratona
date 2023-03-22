#include <iostream>

using namespace std;

int main(){
    int m, n, resultado = 0;
    cin >> m >> n;
    if(m%2 == 0){
        resultado = (m/2)*n;
    }
    else{
        if(n%2 == 0){
            resultado = ((m-1)/2)*n + (n/2);
        }
        else resultado = ((m-1)/2)*n + ((n-1)/2);
    }
    cout << resultado << endl;
    return 0;
}