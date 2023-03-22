#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int c1, c2;
    float n1, n2, v1, v2, valor = 0;
    cin >> c1; 
    cin >> n1; 
    cin >> v1;
    cin >> c2;
    cin >> n2; 
    cin >> v2;

    valor = (n1*v1) + (n2*v2);
    cout << fixed << setprecision(2) <<"VALOR A PAGAR: R$ " << valor << endl;
    return 0;
}