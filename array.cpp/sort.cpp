#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int aa[a];
    for (int i = 0; i < a; i++)
    {
        cin >> aa[i];
    }
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - 1; j++)
        {
            if (aa[j] > aa[j + 1])
            {
                int temp = aa[j];
                aa[j] = aa[j + 1];
                aa[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << aa[i] << " ";
    }
}