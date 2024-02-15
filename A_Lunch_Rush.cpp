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
    ll n, k;
    cin >> n >> k;
    ll max = -1e9;
    for (int i = 1; i <= n; i++)
    {
        ll f, t;
        cin >> f >> t;
        if (t < k)
        {
            if (f > max)
            {
                max = f;
            }
        }
        else
        {
            ll a = f - (t - k);
            if (a > max)
            {
                max = a;
            }
        }
    }
    cout << max << "\n";
    return 0;
}