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
void arif(int a)
{
    int count = 0;
    while (a > 0)
    {
        if (a % 2 != 0)
        {
            count++;
        }
        a /= 2;
    }
    cout << count << endl;
    return;
}
int main()
{
    int a;
    cin >> a;
    arif(a);
}