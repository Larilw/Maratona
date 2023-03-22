#include <iostream>
using namespace std;

int main(){
    int n, colheitas, x1, x2, y1, y2, somaColheita = 0;
    cin >> n;
    int m[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> m[i][j];
        }
    }
    cin >> colheitas;
    for(int i=0; i<colheitas; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j=x1-1; j<=x2-1; j++){
            for(int k=y1-1; k<=y2-1; k++){
                somaColheita += m[j][k];
                m[j][k] = 0;
            }
        }
    }
    cout << somaColheita << endl;
    return 0;
}