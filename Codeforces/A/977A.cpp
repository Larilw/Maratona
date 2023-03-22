#include <iostream>
using namespace std;

int main(){
    int n, v;
    cin >> n >> v;
    for(int i=0; i<v; i++){
        if(n%10 != 0) n--;
        else n = n/10;
    }
    cout << n << endl;
    return 0;
}