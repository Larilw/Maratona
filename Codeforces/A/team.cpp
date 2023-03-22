#include <iostream>

using namespace std;

int main(){
    int n, result = 0, p, v, t;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p >> v >> t;
        if(p+v+t >= 2){
            result++;
        }
    }
    cout << result << endl;
}