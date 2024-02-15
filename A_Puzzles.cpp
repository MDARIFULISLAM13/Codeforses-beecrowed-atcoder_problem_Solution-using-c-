#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> pieces(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> pieces[i];
    }

    sort(pieces.begin(), pieces.end());

    int minDifference = numeric_limits<int>::max(); // Use numeric_limits to get the maximum value for int

    for (int i = 0; i <= m - n; ++i)
    {
        int difference = pieces[i + n - 1] - pieces[i];
        minDifference = min(minDifference, difference);
    }

    cout << minDifference << endl;
    problem

        return 0;
}
