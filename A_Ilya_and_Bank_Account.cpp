#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a > 0)
    {
        cout << a << endl;
    }
    else
    {
        string b = to_string(a);
        int c = b.length();
        int d = abs(a % 10);
        int e = abs((a / 10) % 10);
        if (d >= e)
        {
            for (int i = 0; i < c - 1; i++)
            {
                cout << b[i];
            }
        }
        else
        {

            if (c == 3 && b[2] == '0')
            {
                cout << "0";
            }
            else
            {

                for (int i = 0; i < c; i++)
                {
                    if (i != c - 2)
                    {
                        cout << b[i];
                    }
                }
            }
        }
    }
}
