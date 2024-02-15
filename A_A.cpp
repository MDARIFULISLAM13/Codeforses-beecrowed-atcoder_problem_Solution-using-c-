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
#include <bits/stdc++.h>
using namespace std;
long long int a, b;
bool arif(long long int c[], long long int a, long long int mid)
{
    long long int count = 0;
    for (long long int i = 0; i < a; i++)
    {
        count += (mid / c[i]);
        if (count >= b)
            return true;
    }
    return false;
}
int main()
{
    fastread();
    cin >> a >> b;
    long long int c[a];
    for (long long int i = 0; i < a; i++)
    {
        cin >> c[i];
    }
    sort(c, c + a);
    long long int low = 0, high = 1e18, ans = 0;
    while (low <= high)
    {
        long long int mid = (low + high) / 2;
        if (arif(c, a, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans << endl;
}