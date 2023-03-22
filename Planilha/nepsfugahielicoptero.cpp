#include <iostream>

using namespace std;

int main(){
    int h, p, f, d;
    cin >> h >> p >> f >> d;
    if(h > f && p > f){
        if(p > h){
            if(d == 1) cout << "S" << endl;
            else cout << "N" << endl;
        }
        else{
            if(d == 1) cout << "N" << endl;
            else cout << "S" << endl;
        }
    }
    else if(p > f){
        if(d == -1) cout << "S" << endl;
        else cout << "N" << endl;
    }
    else if(h > f){
        if(d == 1) cout << "S" << endl;
        else cout << "N" << endl;
    }
    else if(h < f && p < f){
        if(p > h){
            if(d == 1) cout << "S" << endl;
            else cout << "N" << endl;
        }
    }
    else if(p < f){
        if(d == 1) cout << "S" << endl;
        else cout << "N" << endl;
    }
    else if(h < f){
        if(d == -1) cout << "S" << endl;
        else cout << "N" << endl;
    }
    return 0;
}