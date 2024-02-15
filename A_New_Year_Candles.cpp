#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = a + (a - 1) / (b - 1);
    cout << c << endl;
}