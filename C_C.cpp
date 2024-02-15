#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long int
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n);
        if (b[0] == b[n - 1])
        {
            cout << n << "\n";
        }
        else
        {
            ll a = b[0];
            ll count = n - 1;

            for (int i = 1; i < n; i++)
            {
                if (b[i] == a)
                {
                    count--;
                }
                else
                {
                    break;
                }
            }
            cout << count << "\n";
        }
    }
    return 0;
}