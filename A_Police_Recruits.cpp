#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int t = 0;
    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        int b;
        cin >> b;
        if (b > 0)
        {
            t += b;
        }
        else
        {

            if (t >= abs(b))
            {
                t -= abs(b);
            }
            else
            {
                count += abs(b);
            }
        }
    }
    cout << count;
    return 0;
}