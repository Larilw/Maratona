#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k, value, result = 0;
    vector<int> v;
    cin >> n >> k;
    for(int i=0; i < n; i++){
        cin >> value;
        v.push_back(value);
    }
    for(int i=0; i < n; i++){
        if(v[i] >= v[k-1] && v[i] > 0){
            result++;
        }
    }
    cout << result << endl;
    return 0;
}