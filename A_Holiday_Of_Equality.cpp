#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    vector<int> b(a);
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    int count = 0;
    for (int i = 0; i < a - 1; i++)
    {
        count += b[a - 1] - b[i];
    }
    cout << count;
}