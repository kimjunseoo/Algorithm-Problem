#include <bits/stdc++.h>

using namespace std;
int num;
int a[10];
int m[42];
int ret;
int main(){

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];

        int j = a[i] % 42;
        m[j]++;
    }
    for (int i = 0; i < 42; i++)
    {
        if(m[i] > 0){
            ret++;
        }
    }
    
    cout << ret << '\n';

    return 0;
}