#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, resultado = 0;
    vector<int> p;
    int x2, y2, x1, y1, x, y;
    cin >> n;
    for(int i=0; i < n+1; i++){
        cin >> x >> y;
        if(p.size()==6){
        p.erase(p.begin());
        p.erase(p.begin());
        p.push_back(x);
        p.push_back(y);
            if(p[1] == p[3] && p[0] < p[2]){
                if(p[2] == p[4] && p[5] > p[3]) resultado++;
            }
            if(p[0] == p[2] && p[3] > p[1]){
                if(p[3] == p[5] && p[4] < p[2]) resultado++;
            }
            if(p[1] == p[3] && p[0] > p[2]){
                if(p[2] == p[4] && p[5] < p[3]) resultado++;
            }
            if(p[0] == p[2] && p[1] > p[3]){
                if(p[3] == p[5] && p[4] > p[2]) resultado++;
            }
        }
        else{
            p.push_back(x);
            p.push_back(y);
        }
    }
    cout << resultado << endl;
    return 0;
}