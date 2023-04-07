#include <bits/stdc++.h>

using namespace std;
string a,b;
int n;
int clothes;

int main(){
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        map<string, int> m;
        cin >> clothes;
        for (int i = 0; i < clothes; i++)
        {
            cin >> a >> b;

            m[b]++;
        }
        long long ret = 1;
        for (auto c : m)
        {
            ret *= ((long long)c.second + 1);
        }
        ret--;
        cout << ret <<'\n';
    }
    
    return 0;
}