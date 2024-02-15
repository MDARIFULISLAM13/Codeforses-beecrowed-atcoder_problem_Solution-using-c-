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
        int max = 0;
        int c;
        for (int i = 0; i < b; i++)
        {
            cin >> c;
            max += c;
        }
        if (max < b)
        {
            cout << "1\n";
        }
        else
        {
            cout << max - b << endl;
        }
    }
}