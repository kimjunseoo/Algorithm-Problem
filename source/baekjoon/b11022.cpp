#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count;
    int num1, num2;
    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        cin >> num1 >> num2;
        cout << "Case #" << i << ": " << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
    }
    

    return 0;
}