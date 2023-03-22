#include <bits/stdc++.h>

using namespace std;

double a = 4.4;
int main() {
    cout << &a << '\n';
    double *b = &a;
    cout << b << '\n';

    return 0;
}