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
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            cout << n + (k * 2) << "\n";
        }
        else
        {
            ll count = k;
            while (k--)
            {
                count--;
                for (int i = 2; i <= n; i++)
                {
                    if (n % i == 0)
                    {
                        n += i;
                        break;
                    };
                }
                if (n % 2 == 0)
                {
                    break;
                }
            }
            cout << n + (count * 2) << "\n";
        }
    }
    return 0;
}