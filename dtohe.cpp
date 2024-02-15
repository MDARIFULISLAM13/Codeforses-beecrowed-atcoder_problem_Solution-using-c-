#include <bits/stdc++.h>
using namespace std;

string dth(int a)
{
    int x = 1;
    string ans = "";
    while (x <= a)
        x *= 16;
    x /= 16;
    while (x > 0)
    {
        int last = a / x;
        a -= x * last;
        x /= 16;
        if (last <= 9)
        {
            ans = ans + to_string(last);
        }
        else
        {
            char c = 'A' + last - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
    int a;
    cin >> a;
    cout << dth(a);
}