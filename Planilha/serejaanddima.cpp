#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, card, sereja = 0, dima = 0;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> card;
        v.push_back(card);
    }
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            if(v[0] < v.back()){
                dima += v.back();
                v.pop_back();
            }
            else{
                dima += v[0];
                v.erase(v.begin());
            }
        }
        else{
            if(v[0] < v.back()){
                sereja += v.back();
                v.pop_back();
            }
            else{
                sereja += v[0];
                v.erase(v.begin());
            }
        }
    }
    cout << dima << " " << sereja << endl;
    return 0;
}