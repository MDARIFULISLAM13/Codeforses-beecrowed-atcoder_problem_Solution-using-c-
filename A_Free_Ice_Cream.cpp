#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    long long int a;
    cin >> a;
    long long int total;
    cin >> total;
    long long int count = 0;
    while (a--)
    {
        long long int b;
        char c;
        cin >> c >> b;
        if (c == '+')
        {
            total += b;
        }
        else
        {
            if (b > total)
            {
                count++;
            }
            else
            {
                total -= b;
            }
        }
    }
    cout << total << " " << count << endl;
}