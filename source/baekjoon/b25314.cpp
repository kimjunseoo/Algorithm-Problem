#include <bits/stdc++.h>

using namespace std;

int main(){

    int count;
    int longTime;

    cin >> count;

    longTime = count / 4;

    for (int i = 0; i < longTime; i++)
    {
        cout << "long" << " ";
    }
    
    cout << "int" << '\n';
    
    return 0;
}