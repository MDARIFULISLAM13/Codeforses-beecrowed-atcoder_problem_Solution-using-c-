#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        int a, B, c;
        cin >> a >> B >> c;

        while (a > 0)
        {
            for (int k = 1; k <= c; k++)
            {
                char y = 'a' + k - 1;
                cout << y;
                a--;
                if (a == 0)
                {
                    break;
                }
            }
        }
        cout << endl;
    }
}