#include <iostream>
using namespace std;

int main(){
    int n, v = 1;
    cin >> n;
    if(n <= 5) cout << 1 << endl;
    else{
        while(n > 5){
            n -= 5;
            v++;
        }
        cout << v << endl;
    }
    return 0;
}