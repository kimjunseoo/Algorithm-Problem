#include <bits/stdc++.h>

using namespace std;

int main(){

    int count;
    cin >> count;


    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i ; k++)
        {
            cout << "*";
        }
        
        cout << "\n";
    }
    
    return 0;
}