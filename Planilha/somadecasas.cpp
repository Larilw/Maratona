#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int n, k, casa, aux;
    vector<int> v;
    set<int> s;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> casa;
        v.push_back(casa);
        s.emplace(casa);
    }
    cin >> k;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        if(v.back() < k){
            if(s.find(k-v.back()) != s.end() && (k-v.back()) != 0){
                cout << k-v.back() << " " << v.back() << endl;
                break;
            }
            else v.pop_back();
        }
        else v.pop_back();
    }
    return 0;
}