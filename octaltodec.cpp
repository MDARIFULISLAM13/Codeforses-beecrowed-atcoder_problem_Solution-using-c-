#include <bits/stdc++.h>
using namespace std;

int btod(int n)
{

    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int main()
{
    int a;
    cin >> a;
    cout << btod(a);
}