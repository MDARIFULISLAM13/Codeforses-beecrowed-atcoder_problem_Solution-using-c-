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
int main()
{
    fastread();
    int a;
    cin >> a;
    int b[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    int minx = 0, maxx = 0;
    for (int i = 0; i < a; i++)
    {
        if (i == 0)
        {
            minx = abs(b[i] - b[i + 1]);
            maxx = abs(b[a - 1] - b[i]);
        }
        else if (i == a - 1)
        {
            minx = abs(b[i] - b[i - 1]);
            maxx = abs(b[i] - b[0]);
        }
        else
        {
            minx = min(abs(b[i] - b[i - 1]), abs(b[i] - b[i + 1]));
            maxx = max(abs(b[i] - b[0]), abs(b[i] - b[a - 1]));
        }
        cout << minx << " " << maxx << endl;
    }
}
