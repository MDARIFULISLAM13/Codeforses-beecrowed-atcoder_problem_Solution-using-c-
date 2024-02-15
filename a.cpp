#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {2, 4, 5, 12, 15, 20, 25};
    int c;
    cin >> c;
    int l = 1, h = 7, mid = 0;
    int ans = 0;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == c)
        {

            break;
        }
        else if (a[mid] < c)
        {

            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout << mid;
}