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
        ll a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        if (a[1] != a[2])
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n"
                 << a[0] << " " << a[0] << " " << a[2] << "\n";
        }
    }
    return 0;
}