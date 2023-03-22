#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    int n, k, a, resultado = 0;
    vector<int> v;
    set<int> s;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
        s.emplace(a);
    }
    for(int i=0; i<n; i++){
        if(s.find((k*v[i])) != s.end()) resultado++;
    }
    cout << resultado << endl;
    return 0;
}