#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = a * b;
    char d;
    for (int i = 1; i <= c; i++)
    {
        cin >> d;
        if (d == 'C' || d == 'M' || d == 'Y')
        {
            cout << "#Color\n";
            return 0;
        }
    }
    cout << "#Black&White\n";
}