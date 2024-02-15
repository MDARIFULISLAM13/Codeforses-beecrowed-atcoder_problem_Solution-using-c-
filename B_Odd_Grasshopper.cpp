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
        ll a, b;
        cin >> a >> b;
        for (ll i = 0; i <= b; i++)
        {
            if (a % 2 == 0)
            {
                a -= i;
            }
            else
            {
                a += i;
            }
        }
        cout << a << "\n";
    }
    return 0;
}