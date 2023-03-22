#include <bits/stdc++.h>

using namespace std;

string username;
int main(){
    cin >> username;
    if(username.size() < 51){
            cout << username << "\?\?!" << '\n';
    }
    return 0;
}