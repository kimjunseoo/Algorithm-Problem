#include <bits/stdc++.h>

using namespace std;

int main(){
    int num1, num2, num3, result;
    
    cin >> num1 >> num2 >> num3;
    if( num1 == num2 && num2 == num3 ){
        result = 10000 + num1 * 1000;
    } else if( num1 == num2 || num1 == num3 ){
        result = 1000 + num1 * 100;
    } else if( num2 == num3){
        result = 1000 + num2 * 100;
    } else {
        result = max({num1, num2, num3}) * 100;
    }
    cout << result << endl;
    return 0;
}