#include <iostream>
using namespace std;

int main(){
    int n, lixo1, lixo2;
    cin >> n;
    for(int i=0; i<=n; i++){
        cin >> lixo1 >> lixo2;
    }
    cout << (n-4)/2 << endl;
    return 0;
}