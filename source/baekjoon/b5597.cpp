#include <bits/stdc++.h>

using namespace std;
int a[35];
int num;
int main(){

    for (int i = 0; i < 28; i++)
    {
        cin >> num;
        a[num]++;
    }
    
    for (int i = 1; i <= 30; i++)
    {
        if(a[i] == 0){
            cout << i << '\n';
        }
    }
    return 0;
}