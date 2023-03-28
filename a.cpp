#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int main(){
    for (int i = 0; i <= 5; i++)v.push_back(i);

    for (int i = 0; i < 5; i++)
    {
        cout << i << "번째 요소 : " << *(v.begin() + i ) << endl;
        cout << &*(v.begin() + i ) << endl;
    }
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }
    auto it = v.begin();
    advance(it, 3);
    cout << '\n';
    cout << *it << endl;
        

    return 0;
}