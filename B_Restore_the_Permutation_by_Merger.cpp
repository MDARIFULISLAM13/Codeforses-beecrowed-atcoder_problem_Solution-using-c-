#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void restore_permutation(int n, vector<int> &a)
{
    set<int> seen;
    for (int i : a)
    {
        if (seen.insert(i).second)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(2 * n);
        for (int &i : a)
        {
            cin >> i;
        }

        // Output
        restore_permutation(n, a);
    }

    return 0;
}
