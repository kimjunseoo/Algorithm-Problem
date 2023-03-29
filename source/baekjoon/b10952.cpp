#include <bits/stdc++.h>

using namespace std;

int main(){

    int num1, num2;

    while (true)
    {
       cin >> num1 >> num2;

       if(num1 == 0 && num2 == 0){
        break;
       }
       cout << num1 + num2 << '\n';
    }
    
    return 0;
}