#include <bits/stdc++.h>

using namespace std;
int pokeSize, problemSize;
string pokeName;
string n;
map<string, int> mp;
map<int, string> mp2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> pokeSize >> problemSize;

    for (int i = 1; i <= pokeSize; i++)
    {
        cin >> pokeName;

        mp[ pokeName ] = i;
        mp2[ i ] = pokeName;

    }
    
    for (int i = 0; i < problemSize; i++)
    {
        cin >> n;
        
        if(atoi(n.c_str()) == 0){
            cout << mp[n] <<'\n';
        } else {
            cout << mp2[atoi(n.c_str())] << '\n';
        }
    }
    

    return 0;
}
