#include <iostream>
#include <vector>

using namespace std;

string winner(int n, int m, vector<int> &a)
{
    if (m == 0)
    {
        return "Anna";
    }

    int countOdd = 0;
    int countSingleDigit = 0;

    for (int num : a)
    {
        if (num % 2 == 1)
        {
            countOdd++;
        }
        if (num >= 1 && num <= 9)
        {
            countSingleDigit++;
        }
    }

    if (countOdd == n && m % 2 == 0)
    {
        return "Anna";
    }
    else if (countSingleDigit > 0)
    {
        return "Anna";
    }
    else
    {
        return "Sasha";
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        string result = winner(n, m, a);
        cout << result << "\n";
    }

    return 0;
}
