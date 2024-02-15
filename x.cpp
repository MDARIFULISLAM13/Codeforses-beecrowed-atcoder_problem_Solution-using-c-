#include <iostream>

using namespace std;

pair<int, int> find_xorry_pair(int x)
{
    int a = 0, b = x;

    // Find the most significant bit
    int msb = 0;
    while ((x >> msb) > 0)
    {
        msb++;
    }

    // Set the rightmost unset bit
    int unset_bit = msb - 1;
    a = (1 << unset_bit);

    // XOR a with x to get b
    b = a ^ x;

    return make_pair(a, b);
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int x;
        cin >> x;

        pair<int, int> result = find_xorry_pair(x);

        cout << result.second << " " << result.first << endl;
    }

    return 0;
}
