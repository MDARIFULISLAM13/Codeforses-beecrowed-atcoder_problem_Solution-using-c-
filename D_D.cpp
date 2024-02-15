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
ll arif(ll mid)
{
    ll ans = 0;
    for (ll i = 1; i <= mid; i++)
    {
        ans += i;
    }
    return ans;
}
int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {

        ll n, count = 0;
        cin >> n;
        ll low = 0, high = 1e7;
        while (low <= high)
        {
            ll mid = (low + high) / 2;
            ll ans = arif(mid);
            if (ans <= n)
            {
                low = mid + 1;
                count = mid;
            }
            else if (ans > n)
            {
                high = mid - 1;
            }
        }
        cout << count << "\n";
    }
    return 0;
}