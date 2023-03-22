#include <iostream>
using namespace std;

int main(){
    int n, t1 = 0, t2 = 1, next = 0;

    cin >> n;
    while(n!=0){
        t1 = 0;
        t2 = 1;
        next = 0;
        for(int i=1; i<n+1 ; i++){
            next = t1 + t2;
            t1 = t2;
            t2 = next;
        }
        cout << next << endl;
        cin >> n;   
    }
        return 0;
}