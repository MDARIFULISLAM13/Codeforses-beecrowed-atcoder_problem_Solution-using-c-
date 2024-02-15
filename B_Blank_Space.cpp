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
        ll a;
        cin >> a;
        ll max = 0, count = 0;
        for (int i = 1; i <= a; i++)
        {
            int b;
            cin >> b;
            if (b == 0)
            {
                ++count;
                if (count > max)
                {
                    max = count;
                }
            }
            else
            {
                count = 0;
            }
        }
        cout << max << "\n";
    }
    return 0;
}