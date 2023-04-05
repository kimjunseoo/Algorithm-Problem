#include <bits/stdc++.h>

using namespace std;
int A, B, C;
int a[101];
int startT, endT;
int sum = 0;
int main(){

    cin >> A >> B >> C ; 

    for (int i = 0; i < 3; i++)
    {
        cin >> startT >> endT;

        for (int i = startT; i < endT; i++)
        {
           a[i]++;
        }
    }
    
    for (int i = 1; i <= 100; i++)
    {
        if(a[i] == 3){
            sum += a[i] * C;
        } else if(a[i] == 2){
            sum += a[i] * B;
        } else if(a[i] == 1){
            sum += a[i] * A;
        }
    }
    
    cout << sum << '\n';

    return 0;
}