#include <bits/stdc++.h>

using namespace std;

int main(){

    int i = 1;
    int num;
    int result = 0;
    cin >> num;

    while ( i <= num)
    {
        result += i;
        i++;
    }
    
    cout << result << endl;

    return 0;
}