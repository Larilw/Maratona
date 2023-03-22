#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, t;
    char s;
    vector<char> v;
    cin >> n >> t;
    for(int i=0; i<n; i++){
        cin >> s;
        v.push_back(s);
    }
    for(int i=0; i<t; i++){
        for(int j=0; j<n; j++){
            if(v[i] == 'B'){
                if(v[i+1] == 'G'){
                    v[i] = 'G';
                    v[i+1] = 'B';
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << v[i];
    }
    cout << endl;
    return 0;
}