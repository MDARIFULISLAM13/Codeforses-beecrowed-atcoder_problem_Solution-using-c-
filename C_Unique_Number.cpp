#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {

        vector<int> bs;
        int c;
        cin >> c;
        int sum = 0;
        for (int i = 9; i >= 1; i--)
        {
            if (i + sum <= c)
            {
                sum += i;
                bs.push_back(i);
            }
        }
        if (sum != c)
        {
            cout << "-1\n";
        }
        else
        {
            sort(bs.begin(), bs.end());
            for (int i = 0; i < bs.size(); i++)
            {
                cout << bs[i];
            }
            cout << endl;
        }
    }
}