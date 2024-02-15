#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int rout = 0;
    while (a > 0)
    {
        int b = a % 10;
        rout = rout * 10 + b;
        a = a / 10;
    }
    cout << rout;
    int x = pow(5, 3);
}