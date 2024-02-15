#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        for (int i = a + 3; i < a + a + 3; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}