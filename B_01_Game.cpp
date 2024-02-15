#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        string b;
        cin >> b;
        int a0 = 0, a1 = 0;
        for (int j = 0; j < b.length(); j++)
        {
            if (b[j] == '0')
            {
                a0++;
            }
            else if (b[j] == '1')
            {
                a1++;
            }
        }
        int d = min(a0, a1);
        if (d % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
}