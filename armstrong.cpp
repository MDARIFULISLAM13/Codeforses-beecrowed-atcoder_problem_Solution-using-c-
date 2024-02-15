#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int aa = a;
    int r = 0;
    while (a > 0)
    {
        int b = a % 10;
        r += pow(b, 3);
        a /= 10;
    }
    cout << r;
}