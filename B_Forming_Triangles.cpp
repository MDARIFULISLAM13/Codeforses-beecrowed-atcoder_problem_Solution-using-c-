#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long count_triangles(const vector<int> &sticks)
{
    int n = sticks.size();
    sort(sticks.begin(), sticks.end());

    long long count = 0;

    for (int i = 0; i < n - 2; ++i)
    {
        int k = i + 2;
        for (int j = i + 1; j < n - 1; ++j)
        {
            while (k < n && sticks[i] + sticks[j] > sticks[k])
            {
                ++k;
            }
            count += max(0, k - j - 1);
        }
    }

    return count;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;

        vector<int> sticks(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> sticks[j];
            sticks[j] *= 2; // Double the length of the sticks
        }

        long long result = count_triangles(sticks);
        cout << result << endl;
    }

    return 0;
}
