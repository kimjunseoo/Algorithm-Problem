#include <bits/stdc++.h>

using namespace std;

int main(){

    int num1, num2;

    while(true){

        cin >> num1 >> num2;

        if(cin.eof() == true){
            break;
        };
        
        cout << num1 + num2 << '\n';
    }
    return 0;
}