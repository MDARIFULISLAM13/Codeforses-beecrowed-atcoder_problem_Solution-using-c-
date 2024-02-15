#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n[4];
    for (int i = 1; i <= 4; i++)
    {
        cin >> n[i];
    }
    string m;
    cin >> m;
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < m.length(); i++)
    {
        if (m[i] == '1')
        {
            a++;
        }
        else if (m[i] == '2')
        {
            b++;
        }
        else if (m[i] == '3')
        {
            c++;
        }
        else if (m[i] == '4')
        {
            d++;
        }
    }
    int total = (n[1] * a) + (n[2] * b) + (n[3] * c) + (n[4] * d);
    cout << total << endl;
}