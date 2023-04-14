#include <bits/stdc++.h>

using namespace std;
int N, M;
int maxNum = -1;
int main(){

    cin >> N >> M;

    int num[N];

    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                if(num[i] + num[j] +  num[k] <= M && num[i] + num[j] +  num[k] > maxNum){
                    maxNum = num[i] + num[j] +  num[k];
                }
            }
            
        }
        
    }
    
    cout << maxNum << '\n';

    return 0;
}