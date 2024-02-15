#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a;
        cin >> a;
        long long int b = 0;

        for (int i = 0; i < 11; i++)
        {
            if (pow(10, i) > a)
            {
                break;
            }
            b = pow(10, i);
        }
        cout << a - b << endl;
    }
}