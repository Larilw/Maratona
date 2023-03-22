#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long int n, m, a, total = 0;
    cin >> n >> m >> a;
    if(n%a == 0){
        total += n/a;
    }
    else total += n/a + 1;
    if(m%a == 0){
        total += m/a;
    }
    else total += m/a + 1;
    cout << total << endl;
    return 0;
}