#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b[a], c[a];
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> b[i] >> c[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (b[i] == c[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;
}