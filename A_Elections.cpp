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
int arif(ll a, ll b, ll c)
{
    int ans = 0;
    ll d = max(b, c);
    d = d + 1 - a;
    if (0 > d)
    {
        return ans;
    }
    else
    {
        return d;
    }
}
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
        ll a, b, c;
        cin >> a >> b >> c;
        cout << arif(a, b, c) << " " << arif(b, a, c) << " " << arif(c, a, b) << "\n";
    }
    return 0;
}