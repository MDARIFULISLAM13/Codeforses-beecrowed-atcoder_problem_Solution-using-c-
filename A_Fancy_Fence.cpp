#include <iostream>

std::string can_build_fence(int angle)
{
    for (int n = 3; n < 180; ++n)
    {
        if ((n - 2) * 180 % n == 0 && (n - 2) * 180 / n == angle)
        {
            return "YES";
        }
    }
    return "NO";
}

int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int angle;
        std::cin >> angle;

        std::string result = can_build_fence(angle);
        std::cout << result << std::endl;
    }

    return 0;
}
