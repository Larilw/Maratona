#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, valor;
    vector<int> v;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> valor;
        v.push_back(valor);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}