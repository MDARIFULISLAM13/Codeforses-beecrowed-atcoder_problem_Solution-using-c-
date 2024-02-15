#include <bits/stdc++.h>
using namespace std;
void arif()
{
    char b[64];
    int high = 0;
    for (int i = 0; i < 64; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 64; i++)
    {
        if (b[i] == 'R')
        {
            high++;
            if (high == 8)
            {
                cout << "R\n";
                return;
            }
        }
        else
        {
            high = 0;
        }
    }
    cout << "B\n";
}
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        arif();
    }
}