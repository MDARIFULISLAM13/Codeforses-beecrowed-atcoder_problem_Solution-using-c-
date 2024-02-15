#include <iostream>

int main()
{
    // Input
    int n;
    std::cin >> n;

    // Initialize the maximum value
    int max_value = 1;

    // Calculate the maximum value using the formula
    for (int i = 1; i < n; ++i)
    {
        max_value *= 2;
    }

    // Output the maximum value
    std::cout << max_value << std::endl;

    return 0;
}
