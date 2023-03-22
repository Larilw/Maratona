#include <iostream>
#include <set>

using namespace std;

int main(){
    string username;
    cin >> username;
    set<char> s;
    for(int i = 0; i < username.length(); i++){
        s.emplace(username[i]);
    }
    if(s.size()%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else cout << "IGNORE HIM!" << endl;
    return 0;
}
