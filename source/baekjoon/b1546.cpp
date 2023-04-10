#include <bits/stdc++.h>

using namespace std;
float N;
float num[1000];
float sum;
float maximum = -1;
int main(){

    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
        if(num[i] > maximum){
            maximum = num[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        sum += num[i] / maximum * 100;
    }
    
    cout << sum / N << '\n';

    return 0;
}