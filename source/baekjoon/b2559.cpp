#include <bits/stdc++.h>

using namespace std;
int day, itv, temp, psum[100001], ret = -1000004;


int main(){

    cin >> day >> itv;

    for (int i = 1; i <= day; i++)
    {
        cin >> temp;
        psum[i] = psum[i - 1] + temp;
    }
    
    for (int i = itv; i <= day; i++)
    {
        ret = max(ret, psum[i] - psum[i - itv]);
    }
    
    cout << ret << '\n';

    return 0;
}