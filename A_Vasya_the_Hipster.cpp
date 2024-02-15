#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = min(a, b);
    a = abs((a + b) - (c * 2)) / 2;
    cout << c << " " << a;
}