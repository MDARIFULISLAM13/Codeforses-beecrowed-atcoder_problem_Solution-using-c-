#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = min(a, b);
    if (c % 2 == 1)
    {
        cout << "Akshat" << endl;
    }
    else if (c % 2 == 0)
    {
        cout << "Malvika" << endl;
    }
}