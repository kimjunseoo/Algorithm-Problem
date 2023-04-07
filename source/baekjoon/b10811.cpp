#include <bits/stdc++.h>

using namespace std;
int N, M;
int q, w;
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
        if(q != w){
            reverse(a + q, a + w + 1);
        }
 
    }
    
    for (int i = 1; i <= N; i++)
    {
        cout << a[i] << " ";
    }

    cout << '\n';
    
    return 0;
}