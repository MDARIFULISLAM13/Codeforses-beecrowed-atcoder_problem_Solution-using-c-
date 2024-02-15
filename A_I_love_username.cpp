#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int min(b), max(b), count(0);
    for (int i = 1; i < a; i++)
    {
        cin >> b;
        if (b < min)
        {
            count++;
            min = b;
        }
        else if (b > max)
        {
            count++;
            max = b;
        }
    }
    cout << count << "\n";
    return 0;
}