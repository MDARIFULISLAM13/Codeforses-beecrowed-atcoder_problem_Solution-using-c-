#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int b;
        cin >> b;
        int moves = 0;
        int x = 0;
        while (b > 1)
        {

            if (b % 6 == 0)
            {
                b /= 6;
            }
            else if (b % 3 == 0)
            {
                b *= 2;
            }
            else
            {
                cout << "-1\n";
                x = 1;
                break;
            }
            moves++;
        }
        if (x == 0)
        {
            cout << moves << "\n";
        }
    }
}