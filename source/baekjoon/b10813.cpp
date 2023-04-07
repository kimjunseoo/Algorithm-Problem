#include <bits/stdc++.h>

using namespace std;
int q, w;
int N, M;
int main(){

    cin >> N >> M;

    int a[N + 1];

    for (int i = 1; i <= N; i++)
    {
        a[i] = i;
    }
    
    for (int i = 0; i < M; i++)
    {
        cin >> q >> w;

        int temp;

        temp = a[q];
        a[q] = a[w];
        a[w] = temp;
    }
    for (int i = 1; i <= N; i++)
    {
        cout << a[i] << " ";
    }
    
    cout << '\n';

    return 0;
}