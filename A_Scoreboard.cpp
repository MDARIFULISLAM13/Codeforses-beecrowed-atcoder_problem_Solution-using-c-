#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int countb = 0, countc = 0;

    for (int i = 1; i <= a; i++)
    {
        int b, c;
        cin >> b >> c;
        if (b > c)
        {
            countb++;
        }
        else if (c > b)
        {
            countc++;
        }
    }
    if (countb < countc)
    {
        cout << "Aoki";
    }
    else if (countb > countc)
    {
        cout << "Takahashi\n";
    }
    else
    {
        cout << "Draw\n";
    }
}