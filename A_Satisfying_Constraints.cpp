#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int countSatisfyingIntegers(int n, vector<pair<int, int>> &constraints)
{
    int min_val = INT_MIN;
    int max_val = INT_MAX;
    set<int> not_equal_vals;

    for (int i = 0; i < n; ++i)
    {
        int a = constraints[i].first;
        int x = constraints[i].second;

        if (a == 1)
        {
            min_val = max(min_val, x);
        }
        else if (a == 2)
        {
            max_val = min(max_val, x - 1); // Adjust max_val to handle exclusive upper bound
        }
        else
        {
            not_equal_vals.insert(x);
        }
    }

    int count = max(0, max_val - min_val + 1 - not_equal_vals.size());
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

        vector<pair<int, int>> constraints;
        for (int j = 0; j < n; ++j)
        {
            int a, x;
            cin >> a >> x;
            constraints.push_back({a, x});
        }

        int result = countSatisfyingIntegers(n, constraints);
        cout << result << endl;
    }

    return 0;
}
