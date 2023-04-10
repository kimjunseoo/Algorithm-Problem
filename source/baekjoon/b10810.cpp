#include <bits/stdc++.h>

using namespace std;
int N, M;
int I, J, K;
int a[101];
int main(){

    cin >> N >> M;

    for (int i = 1; i <= M; i++)
    {
        cin >> I >> J >> K;

        for (int j = I; j <= J; j++)
        {
            a[j] = K;
        }
    }
    
    for (int i = 1; i <= N; i++)
    {
        cout << a[i] << " ";
    }
    
    cout << '\n';

    return 0;
}