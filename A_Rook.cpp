#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a;
        cin >> a;
        int b;
        cin >> b;
        for (char i = 'a'; i <= 'h'; i++)
        {
            if (i != a)
            {

                cout << i << b << endl;
            }
        }
        for (int i = 1; i <= 8; i++)
        {
            if (i != b)
            {
                cout << a << i << endl;
            }
        }
    }
}