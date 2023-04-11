#include <bits/stdc++.h>

using namespace std;
int a[26];
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s;

    for (int i = 0; i < 26; i++)
    {
        a[i] = -1;
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        auto it = s.find(s[i]);



        if(a[s[i] - 97] == -1){
            a[s[i] - 97] = it;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
    return 0;
}