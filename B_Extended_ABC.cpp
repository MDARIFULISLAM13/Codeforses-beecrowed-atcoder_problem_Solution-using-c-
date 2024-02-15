#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int b = a.length();
    for (int i = 0; i < b - 2; i++)
    {
        if (a[i] > a[i + 1])
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}
