#include <iostream>
#include <cmath>
using namespace std;

bool prime(int num)
{
    
    int i = 2;
    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (prime(i))
        {
            cout << i << "\n";
        }
    }
}