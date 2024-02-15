#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int b;
    cin >> b;
    string c;
    cin >> c;
    int ud = 0, lr = 0;
    for (int i = 0; i < b; i++)
    {
        if (c[i] == 'U')
        {
            ud++;
        }
        else if (c[i] == 'D')
        {
            ud--;
        }
        else if (c[i] == 'R')
        {
            lr++;
        }
        else if (c[i] == 'L')
        {
            lr--;
        }

        if (ud == 1 && lr == 1)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO" << endl;
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
