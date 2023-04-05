#include <bits/stdc++.h>

using namespace std;
string str;
string revStr;
int main(){

    cin >> str;

    reverse(str.begin(), str.end());

    revStr = str;

    reverse(str.begin(), str.end()); 

    if(str == revStr){
        cout << "1" << '\n';
    } else {
        cout << "0" << '\n';
    }

    return  0;
}