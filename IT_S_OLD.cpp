#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int count_good_pairs(int n, vector<int> &a, vector<int> &b)
{
    vector<int> differences(n);

        for (int i = 0; i < n; ++i)
    {
        differences[i] = a[i] - b[i];
    }

    // Sort the differences in ascending order
    sort(differences.begin(), differences.end());

    int count = 0;
    int left = 0, right = n - 1;

    while (left < right)
    {
        // If the sum of the differences is greater than 0, move right pointer to the left
        if (differences[left] + differences[right] > 0)
        {
            count += right - left;
            right--;
        }
        // If the sum is less than or equal to 0, move left pointer to the right
        else
        {
            left++;
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    // Input reading
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    // Calculate and print the result
    int result = count_good_pairs(n, a, b);
    cout << result << endl;

    return 0;
}
