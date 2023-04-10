#include <bits/stdc++.h>

using namespace std;
int N, M, O;
int a[15001];
int ret;
int main(){

    cin >> N;
    cin >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++)
    {
       for (int j = i + 1; j < N; j++)
       {
            if(a[i] + a[j] == M) ret++;
       }
       
    }
    
    cout << ret << '\n';
    
    return 0;
}