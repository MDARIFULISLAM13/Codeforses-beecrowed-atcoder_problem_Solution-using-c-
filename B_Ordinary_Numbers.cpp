#include <iostream>
#include <cmath>

// Function to count ordinary numbers up to n
int countOrdinaryNumbers(int n)
{
    int count = 9; // Single-digit numbers are ordinary

    for (int digits = 2; digits <= 9; ++digits)
    {
        int sameDigit = 1;
        for (int i = 1; i < digits; ++i)
        {
            sameDigit *= 10;
        }

        count += sameDigit;
        if (sameDigit > n)
        {
            break;
        }
    }

    return count;
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        // Output the result for each test case
        std::cout << countOrdinaryNumbers(n) << std::endl;
    }

    return 0;
}
