#include <bits/stdc++.h>

using namespace std;
int N;
int ret;
int num;
int main(){

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        bool isPrime = true;

        if(num < 2){
            isPrime = false;
        } else {
            for (int j = 2; j <= sqrt(num); j++)
            {
                if(num % j ==0){
                    isPrime = false;
                    break;
                }
            }
        }
        
        if(isPrime){
            ret++;
        }
    }

    cout << ret << '\n';

    return 0;
}