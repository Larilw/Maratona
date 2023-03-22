#include <iostream>
using namespace std;

int main(){
    int n, x = 0, y = 0, z = 0, xin, yin, zin;
    cin >> n;
    for(int i=0; i<n ; i++){
        cin >> xin >> yin >> zin;
        x += xin;
        y += yin;
        z += zin;
    }
    if(x==0 && y==0 && z==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}