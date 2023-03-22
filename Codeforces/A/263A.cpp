#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, m[5][5], pos_i, pos_j, resultado = 0;
    for(int i=0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> n;
            m[i][j] = n;
            if(n == 1){
                pos_i = i;
                pos_j = j;
            }
        }
    }
    resultado = abs(pos_i - 2) + abs(pos_j - 2);
    cout << resultado << endl;
    return 0;
}