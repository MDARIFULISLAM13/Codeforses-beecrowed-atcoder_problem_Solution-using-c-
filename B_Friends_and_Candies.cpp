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

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 0;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % n != 0)
        {
            cout << "-1\n";
        }

        else
        {
            ll b = sum / n;
            ll count = 0;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] > b)
                {
                    count++;
                }
            }
            cout << count << "\n";
        }
    }
}