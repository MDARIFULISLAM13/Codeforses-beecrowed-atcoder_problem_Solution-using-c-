#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int b;
    cin >> b;
    int c[b];
    for (int i = 0; i < b; i++)
    {
        cin >> c[i];
    }
    sort(c, c + b);
    int count = 1;
    int p = c[0];
    for (int i = 1; i < b; i++)
    {
        if (c[i] == p)
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count == 3)
        {
            cout << c[i] << endl;
            return;
            break;
        }
        p = c[i];
    }
    cout << "-1" << endl;
    return;
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