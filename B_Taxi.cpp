#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int b;
    int count = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    for (int i = 1; i <= a; i++)
    {
        cin >> b;
        if (b == 4)
        {
            count++;
        }
        else if (b == 3)
        {
            c++;
        }
        else if (b == 1)
        {
            e++;
        }
        else if (b == 2)
        {
            d += 2;
        };
    }
    int ex = e - c;
    if (ex > 0)
    {
        d = d + ex;
    };
    count = count + c;
    int t = d / 4;
    if (d % 4 != 0)
    {
        t += 1;
    };
    count = count + t;
    cout << count;
}