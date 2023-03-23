#include <bits/stdc++.h>

using namespace std;

int a, b;

int main(){
    cin >> a;
    cin >> b;
    // a  일의 자릿수
    int a3 = a % 10;
    int a3r = a / 10;

    // a 십의 자릿수
    int a2 = a3r % 10;

    // a 백의 자릿수
    int a1 = a3r / 10;

    // b  일의 자릿수
    int b3 = b % 10;
    int b3r = b / 10;

    // a 십의 자릿수
    int b2 = b3r % 10;

    // a 백의 자릿수
    int b1 = b3r / 10;
    cout << a * b3 << endl;
    cout << a * b2 << endl;
    cout << a * b1 << endl;
    cout << a * b << endl;
    
    return 0;
}