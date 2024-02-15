#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    string b;
    cin >> b;
    int a0 = 0, a1 = 0;
    for (int i = 0; i < a; i++)
    {
        if (b[i] == '0')
        {
            a0++;
        }
        else
        {
            a1++;
        }
    }
    int c = abs(a0 - a1);
    cout << c << endl;
}