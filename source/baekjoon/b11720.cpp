#include <bits/stdc++.h>

using namespace std;
string s;
int N, ret;
int main (){

    cin >> N;

    cin >> s;

    for (int i = 0; i < N; i++)
    {
        ret += s[i] - '0';
    }
    
    cout << ret << '\n';

    return 0;
}