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
    string a = "314159265358979323846264338327";
    int t;
    cin >> t;
    while (t--)
    {
        string b;
        cin >> b;
        int count = 0;
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == a[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
}