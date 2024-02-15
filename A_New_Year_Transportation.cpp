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
int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int c[a - 1];
    for (int i = 1; i <= a - 1; i++)
    {
        cin >> c[i];
    }
    for (int i = 1; i <= a; i++)
    {
        if (i == b)
        {
            cout << "YES\n";
            return 0;
        }
        else if (i > b)
        {
            cout << "NO\n";
            return 0;
        }
        i += (c[i] - 1);
    }
    cout << "NO\n";
}